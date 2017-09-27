package com.earthview.world.plugin.particlefx;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PointEmitterFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		PointEmitterFactory emptyInstance = new PointEmitterFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
