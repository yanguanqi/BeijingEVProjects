package com.earthview.world.spatial.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IactionfactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Iactionfactory emptyInstance = new Iactionfactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
