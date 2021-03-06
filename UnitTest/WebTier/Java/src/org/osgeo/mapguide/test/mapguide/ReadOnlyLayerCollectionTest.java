package org.osgeo.mapguide.test.mapguide;

import java.io.*;
import java.util.*;
import org.osgeo.mapguide.*;
import org.osgeo.mapguide.test.common.*;

public class ReadOnlyLayerCollectionTest implements IExternalTest
{
    public void Execute(IPlatformFactory factory, ITestLogger logger)
    {
        MgFeatureQueryOptions query1 = new MgFeatureQueryOptions();
        query1.setFilter("Autogenerated_SDF_ID < 4");

        MgFeatureQueryOptions query2 = new MgFeatureQueryOptions();
        query2.setFilter("Autogenerated_SDF_ID < 4");

        MgMap map = (MgMap)factory.createMap();
        MgResourceService resSvc = (MgResourceService)factory.createService(MgServiceType.ResourceService);
        MgResourceIdentifier mdfId = new MgResourceIdentifier("Library://Samples/Sheboygan/Maps/Sheboygan.MapDefinition");
        map.create(mdfId, "Test");
        map.save();

        MgLayerCollection layers = map.getLayers();
        MgLayerBase item1 = layers.getItem("Parcels");
        MgLayerBase item2 = layers.getItem("Buildings");

        MgFeatureReader fr1 = item1.selectFeatures(query1);
        MgFeatureReader fr2 = item2.selectFeatures(query2);

        MgSelection sel = new MgSelection(map);
        try {
            sel.fromXml(""); //Clear
            sel.addFeatures(item1, fr1, 0);
            sel.addFeatures(item2, fr2, 0);
        } finally{
            fr1.close();
            fr2.close();
        }

        //Now we can test the collection
        MgReadOnlyLayerCollection items = sel.getLayers();

        Assert.IsTrue(items.getCount() == 2, "Expected 2 items");

        //NOTE: Possible bug in ordering of MgReadOnlyLayerCollection here (I had to reverse the order of layers
        //being tested) Nevertheless, were testing that the ordering (whether correct or not) is the same when iterated
        //in both the classical and iterative methods

        int i = 0;
        //Looping the classic way
        for (i = 0; i < items.getCount(); i++) {
            switch (i){
                case 0:
                    Assert.IsTrue(items.getItem(i).getName().equals("Buildings"), "Expected item #" + (i+1) + " to be Buildings");
                    break;
                case 1:
                    Assert.IsTrue(items.getItem(i).getName().equals("Parcels"), "Expected item #" + (i+1) + " to be Parcels");
                    break;
            }
        }

        //Looping the iterative way
        i = 0;
        for (MgLayerBase item : items) {
            String itemName = item.getName();
            switch (i){
                case 0:
                    Assert.IsTrue(itemName.equals("Buildings"), "Expected item #" + (i+1) + " to be Buildings");
                    break;
                case 1:
                    Assert.IsTrue(itemName.equals("Parcels"), "Expected item #" + (i+1) + " to be Parcels");
                    break;
            }
            i++;
        }
    }
}