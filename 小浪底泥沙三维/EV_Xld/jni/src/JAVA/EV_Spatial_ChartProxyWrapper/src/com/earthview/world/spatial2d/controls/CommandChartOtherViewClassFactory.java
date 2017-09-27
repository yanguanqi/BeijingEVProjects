package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CommandChartOtherViewClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CommandChartOtherView emptyInstance = new CommandChartOtherView(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
