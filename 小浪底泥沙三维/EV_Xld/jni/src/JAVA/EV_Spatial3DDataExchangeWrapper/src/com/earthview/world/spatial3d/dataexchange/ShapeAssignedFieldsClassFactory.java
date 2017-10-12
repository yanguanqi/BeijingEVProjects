package com.earthview.world.spatial3d.dataexchange;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ShapeAssignedFieldsClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ShapeAssignedFields emptyInstance = new ShapeAssignedFields(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
