package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CommandChartSpecificRelationshipClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CommandChartSpecificRelationship emptyInstance = new CommandChartSpecificRelationship(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
