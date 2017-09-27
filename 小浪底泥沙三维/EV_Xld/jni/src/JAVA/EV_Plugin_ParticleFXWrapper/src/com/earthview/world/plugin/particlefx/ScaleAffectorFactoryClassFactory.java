package com.earthview.world.plugin.particlefx;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ScaleAffectorFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ScaleAffectorFactory emptyInstance = new ScaleAffectorFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
