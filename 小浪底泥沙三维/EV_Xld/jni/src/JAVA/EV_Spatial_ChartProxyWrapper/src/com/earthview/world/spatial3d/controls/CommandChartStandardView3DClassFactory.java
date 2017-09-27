package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CommandChartStandardView3DClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CommandChartStandardView3D emptyInstance = new CommandChartStandardView3D(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
