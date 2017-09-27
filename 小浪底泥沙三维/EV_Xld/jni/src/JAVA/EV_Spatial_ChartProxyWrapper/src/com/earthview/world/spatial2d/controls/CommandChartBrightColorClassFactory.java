package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CommandChartBrightColorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CommandChartBrightColor emptyInstance = new CommandChartBrightColor(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
