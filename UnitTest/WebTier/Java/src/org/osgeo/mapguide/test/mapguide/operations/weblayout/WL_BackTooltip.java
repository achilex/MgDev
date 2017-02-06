package org.osgeo.mapguide.test.mapguide.operations.weblayout;

import java.util.*;
import com.almworks.sqlite4java.*;
import org.osgeo.mapguide.*;
import org.osgeo.mapguide.test.*;
import org.osgeo.mapguide.test.common.*;
import org.osgeo.mapguide.test.operations.*;

public class WL_BackTooltip extends WebLayoutOperationExecutor
{
    public WL_BackTooltip(IWebLayoutCreator layout, String unitTestVm)
    {
        super("WL_BackTooltip", layout, unitTestVm);
    }

    public TestResult Execute(int paramSetId)
    {
        try
        {
            CreateWebLayoutFromResource(paramSetId);
            MgWebTaskPane tp = _wl.getTaskPane();
            MgWebTaskBar tbar = tp.getTaskBar();
            MgWebWidgetCollection tbuttons = tbar.getTaskButtons();
            MgWebTaskBarWidget back = (MgWebTaskBarWidget)tbuttons.getWidget(MgWebTaskButtonType.Back);
            return TestResult.String(back.getTooltip());
        }
        catch (MgException ex)
        {
            return TestResult.FromMgException(ex);
        }
    }
}