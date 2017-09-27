package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CommandChartTraditionalSymbol3DClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CommandChartTraditionalSymbol3D emptyInstance = new CommandChartTraditionalSymbol3D(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
