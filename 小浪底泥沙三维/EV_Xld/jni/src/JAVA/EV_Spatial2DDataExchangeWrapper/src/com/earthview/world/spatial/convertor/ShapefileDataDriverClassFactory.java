package com.earthview.world.spatial.convertor;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ShapefileDataDriverClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ShapefileDataDriver emptyInstance = new ShapefileDataDriver(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
