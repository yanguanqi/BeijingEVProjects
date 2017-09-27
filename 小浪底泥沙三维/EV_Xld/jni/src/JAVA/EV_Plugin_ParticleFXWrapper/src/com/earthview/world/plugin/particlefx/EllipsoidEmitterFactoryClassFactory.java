package com.earthview.world.plugin.particlefx;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EllipsoidEmitterFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EllipsoidEmitterFactory emptyInstance = new EllipsoidEmitterFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
