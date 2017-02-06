package org.osgeo.mapguide.test.platform.operations.feature;

import java.util.*;
import com.almworks.sqlite4java.*;
import org.osgeo.mapguide.*;
import org.osgeo.mapguide.test.*;
import org.osgeo.mapguide.test.common.*;
import org.osgeo.mapguide.test.platform.*;

public class GetSpatialContexts extends FeatureServiceOperationExecutor
{
    public GetSpatialContexts(MgFeatureService featSvc, String unitTestVm)
    {
        super("GetSpatialContexts", featSvc, unitTestVm);
    }

    public TestResult Execute(int paramSetId)
    {
        try
        {
            HashMap<String, String> param = new HashMap<String, String>();
            ReadParameterValue(paramSetId, "RESOURCEID", param);
            ReadParameterValue(paramSetId, "ACTIVEONLY", param);

            MgResourceIdentifier resId = null;
            if (param.containsKey("RESOURCEID"))
            {
                resId = new MgResourceIdentifier(param.get("RESOURCEID"));
            }

            MgSpatialContextReader reader = _featureService.getSpatialContexts(resId, (param.get("ACTIVEONLY").equals("1")));
            MgByteReader byteReader = reader.toXml();
            reader.close();
            return TestResult.FromByteReader(byteReader);
        }
        catch (MgException ex)
        {
            return TestResult.FromMgException(ex);
        }
        catch (Exception ex)
        {
            return TestResult.FromException(ex);
        }
    }
}