package com.earthview.world.plugin.particlefx;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class BoxEmitterFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		BoxEmitterFactory emptyInstance = new BoxEmitterFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
