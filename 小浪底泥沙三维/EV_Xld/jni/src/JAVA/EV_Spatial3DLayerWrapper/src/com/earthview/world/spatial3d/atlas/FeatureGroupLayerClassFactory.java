package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class FeatureGroupLayerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		FeatureGroupLayer emptyInstance = new FeatureGroupLayer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
