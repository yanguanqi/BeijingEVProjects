package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CommandChartSimpleSymbol3DClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CommandChartSimpleSymbol3D emptyInstance = new CommandChartSimpleSymbol3D(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
