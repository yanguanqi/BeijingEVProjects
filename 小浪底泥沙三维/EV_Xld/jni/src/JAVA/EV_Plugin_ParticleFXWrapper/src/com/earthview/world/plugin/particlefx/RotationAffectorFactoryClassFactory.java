package com.earthview.world.plugin.particlefx;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RotationAffectorFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RotationAffectorFactory emptyInstance = new RotationAffectorFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
