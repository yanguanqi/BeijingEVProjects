package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CommandChartNightColor3DClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CommandChartNightColor3D emptyInstance = new CommandChartNightColor3D(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
