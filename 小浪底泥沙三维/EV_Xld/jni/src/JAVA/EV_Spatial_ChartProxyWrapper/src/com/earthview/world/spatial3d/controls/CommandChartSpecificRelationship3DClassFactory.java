package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CommandChartSpecificRelationship3DClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CommandChartSpecificRelationship3D emptyInstance = new CommandChartSpecificRelationship3D(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
