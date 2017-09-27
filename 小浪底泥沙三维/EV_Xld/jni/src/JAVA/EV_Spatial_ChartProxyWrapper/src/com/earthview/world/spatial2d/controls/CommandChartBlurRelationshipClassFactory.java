package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CommandChartBlurRelationshipClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CommandChartBlurRelationship emptyInstance = new CommandChartBlurRelationship(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
