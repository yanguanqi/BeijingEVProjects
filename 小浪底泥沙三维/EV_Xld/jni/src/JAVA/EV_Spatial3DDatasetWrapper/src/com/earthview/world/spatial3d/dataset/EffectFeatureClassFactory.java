package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EffectFeatureClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EffectFeature emptyInstance = new EffectFeature(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
