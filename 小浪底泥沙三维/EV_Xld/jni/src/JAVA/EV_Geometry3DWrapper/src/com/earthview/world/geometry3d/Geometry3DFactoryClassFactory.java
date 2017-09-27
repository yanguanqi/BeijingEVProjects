package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Geometry3DFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Geometry3DFactory emptyInstance = new Geometry3DFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
