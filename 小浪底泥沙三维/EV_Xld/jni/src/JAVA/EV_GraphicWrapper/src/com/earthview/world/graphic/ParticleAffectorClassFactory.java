package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ParticleAffectorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ParticleAffector emptyInstance = new ParticleAffector(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
