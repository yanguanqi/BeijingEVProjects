package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Geometry3DFactoryEnumClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Geometry3DFactoryEnum emptyInstance = new Geometry3DFactoryEnum(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
