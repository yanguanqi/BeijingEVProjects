package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class BillboardParticleRendererFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		BillboardParticleRendererFactory emptyInstance = new BillboardParticleRendererFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
