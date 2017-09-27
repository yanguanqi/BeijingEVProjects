package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CommandChartOtherView3DClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CommandChartOtherView3D emptyInstance = new CommandChartOtherView3D(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
