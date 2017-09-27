package com.earthview.world.plugin.particlefx;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CylinderEmitterFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CylinderEmitterFactory emptyInstance = new CylinderEmitterFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
