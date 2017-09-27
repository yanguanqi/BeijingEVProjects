package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ParticleAffectorTranslatorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ParticleAffectorTranslator emptyInstance = new ParticleAffectorTranslator(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
