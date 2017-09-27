package com.earthview.world.plugin.particlefx;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PointExtendEmitterFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		PointExtendEmitterFactory emptyInstance = new PointExtendEmitterFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
