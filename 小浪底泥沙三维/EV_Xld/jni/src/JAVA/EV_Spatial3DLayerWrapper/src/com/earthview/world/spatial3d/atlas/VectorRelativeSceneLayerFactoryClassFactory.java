package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class VectorRelativeSceneLayerFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		VectorRelativeSceneLayerFactory emptyInstance = new VectorRelativeSceneLayerFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
