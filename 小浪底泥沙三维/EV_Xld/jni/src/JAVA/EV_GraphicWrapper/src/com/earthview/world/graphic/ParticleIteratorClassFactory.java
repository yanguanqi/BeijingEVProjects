package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ParticleIteratorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ParticleIterator emptyInstance = new ParticleIterator(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
