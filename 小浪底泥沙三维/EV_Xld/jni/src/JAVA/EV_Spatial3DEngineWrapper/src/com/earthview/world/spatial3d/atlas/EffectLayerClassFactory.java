package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EffectLayerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EffectLayer emptyInstance = new EffectLayer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
