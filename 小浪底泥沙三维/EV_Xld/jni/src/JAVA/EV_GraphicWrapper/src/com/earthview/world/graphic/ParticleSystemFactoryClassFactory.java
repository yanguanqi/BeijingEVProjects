package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ParticleSystemFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ParticleSystemFactory emptyInstance = new ParticleSystemFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
