package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ParticleAffectorFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ParticleAffectorFactory emptyInstance = new ParticleAffectorFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
