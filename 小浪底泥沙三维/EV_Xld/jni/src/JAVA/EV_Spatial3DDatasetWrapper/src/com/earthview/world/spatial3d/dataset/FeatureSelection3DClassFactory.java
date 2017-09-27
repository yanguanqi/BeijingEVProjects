package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class FeatureSelection3DClassFactory implements IClassFactory {
	public BaseObject create()
	{
		FeatureSelection3D emptyInstance = new FeatureSelection3D(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
