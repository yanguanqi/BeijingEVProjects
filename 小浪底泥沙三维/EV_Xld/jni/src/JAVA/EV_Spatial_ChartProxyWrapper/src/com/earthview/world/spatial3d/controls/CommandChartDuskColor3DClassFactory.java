package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CommandChartDuskColor3DClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CommandChartDuskColor3D emptyInstance = new CommandChartDuskColor3D(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
