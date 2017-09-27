package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ParticleSystemRendererFactoryObjClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ParticleSystemRendererFactoryObj emptyInstance = new ParticleSystemRendererFactoryObj(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
