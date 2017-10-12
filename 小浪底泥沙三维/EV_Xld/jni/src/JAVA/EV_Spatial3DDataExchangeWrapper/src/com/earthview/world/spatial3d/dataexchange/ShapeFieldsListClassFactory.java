package com.earthview.world.spatial3d.dataexchange;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ShapeFieldsListClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ShapeFieldsList emptyInstance = new ShapeFieldsList(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
