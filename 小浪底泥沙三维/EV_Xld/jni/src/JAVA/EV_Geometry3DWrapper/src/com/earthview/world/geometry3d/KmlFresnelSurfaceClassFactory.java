package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class KmlFresnelSurfaceClassFactory implements IClassFactory {
	public BaseObject create()
	{
		KmlFresnelSurface emptyInstance = new KmlFresnelSurface(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
