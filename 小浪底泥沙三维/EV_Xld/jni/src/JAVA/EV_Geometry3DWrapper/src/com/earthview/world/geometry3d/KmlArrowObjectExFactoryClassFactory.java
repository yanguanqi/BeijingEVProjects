package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class KmlArrowObjectExFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		KmlArrowObjectExFactory emptyInstance = new KmlArrowObjectExFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
