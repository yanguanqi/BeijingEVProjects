package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ParticleEmitterClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ParticleEmitter emptyInstance = new ParticleEmitter(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
