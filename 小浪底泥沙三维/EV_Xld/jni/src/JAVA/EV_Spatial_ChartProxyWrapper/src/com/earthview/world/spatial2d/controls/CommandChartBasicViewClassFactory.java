package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CommandChartBasicViewClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CommandChartBasicView emptyInstance = new CommandChartBasicView(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
