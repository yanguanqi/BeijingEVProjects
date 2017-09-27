package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ParticleClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Particle emptyInstance = new Particle(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
