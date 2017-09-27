package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class VectorDBClampSceneLayerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		VectorDBClampSceneLayer emptyInstance = new VectorDBClampSceneLayer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
