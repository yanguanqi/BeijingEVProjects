package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ParticleSystemTranslatorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ParticleSystemTranslator emptyInstance = new ParticleSystemTranslator(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
