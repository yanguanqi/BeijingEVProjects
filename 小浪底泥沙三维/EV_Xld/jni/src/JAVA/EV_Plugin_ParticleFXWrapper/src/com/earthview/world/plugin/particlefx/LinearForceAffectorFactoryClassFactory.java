package com.earthview.world.plugin.particlefx;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LinearForceAffectorFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		LinearForceAffectorFactory emptyInstance = new LinearForceAffectorFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
