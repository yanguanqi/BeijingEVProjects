package com.earthview.world.plugin.particlefx;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DeflectorPlaneAffectorFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DeflectorPlaneAffectorFactory emptyInstance = new DeflectorPlaneAffectorFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
