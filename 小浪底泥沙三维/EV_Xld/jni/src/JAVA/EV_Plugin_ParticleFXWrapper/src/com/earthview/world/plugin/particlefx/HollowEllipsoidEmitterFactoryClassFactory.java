package com.earthview.world.plugin.particlefx;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class HollowEllipsoidEmitterFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		HollowEllipsoidEmitterFactory emptyInstance = new HollowEllipsoidEmitterFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
