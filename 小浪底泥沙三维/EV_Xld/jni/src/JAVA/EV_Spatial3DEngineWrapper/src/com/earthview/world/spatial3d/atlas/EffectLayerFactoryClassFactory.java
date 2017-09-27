package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EffectLayerFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EffectLayerFactory emptyInstance = new EffectLayerFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
