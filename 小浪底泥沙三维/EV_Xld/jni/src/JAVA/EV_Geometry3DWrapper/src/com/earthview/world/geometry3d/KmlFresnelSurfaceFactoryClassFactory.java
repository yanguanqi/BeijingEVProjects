package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class KmlFresnelSurfaceFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		KmlFresnelSurfaceFactory emptyInstance = new KmlFresnelSurfaceFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
