package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class VectorRelativeSceneLayerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		VectorRelativeSceneLayer emptyInstance = new VectorRelativeSceneLayer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
