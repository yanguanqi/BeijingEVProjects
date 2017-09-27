package com.earthview.world.plugin.particlefx;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RingEmitterFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RingEmitterFactory emptyInstance = new RingEmitterFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
