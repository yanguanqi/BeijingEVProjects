package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CommandChartBasicView3DClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CommandChartBasicView3D emptyInstance = new CommandChartBasicView3D(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
