package com.earthview.world.spatial3d.kmlmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class KmlModelFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		KmlModelFactory emptyInstance = new KmlModelFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
