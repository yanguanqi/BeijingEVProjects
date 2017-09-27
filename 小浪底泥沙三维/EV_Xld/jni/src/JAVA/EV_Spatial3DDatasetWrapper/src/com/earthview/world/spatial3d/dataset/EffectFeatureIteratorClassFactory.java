package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EffectFeatureIteratorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EffectFeatureIterator emptyInstance = new EffectFeatureIterator(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
