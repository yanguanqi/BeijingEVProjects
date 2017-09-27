package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EffectFeatureVectorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EffectFeatureVector emptyInstance = new EffectFeatureVector(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
