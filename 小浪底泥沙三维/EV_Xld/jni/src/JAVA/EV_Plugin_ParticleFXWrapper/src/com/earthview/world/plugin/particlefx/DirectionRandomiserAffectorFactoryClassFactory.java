package com.earthview.world.plugin.particlefx;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DirectionRandomiserAffectorFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DirectionRandomiserAffectorFactory emptyInstance = new DirectionRandomiserAffectorFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
