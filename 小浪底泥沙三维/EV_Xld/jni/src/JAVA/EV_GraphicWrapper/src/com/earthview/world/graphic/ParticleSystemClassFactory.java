package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ParticleSystemClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ParticleSystem emptyInstance = new ParticleSystem(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
