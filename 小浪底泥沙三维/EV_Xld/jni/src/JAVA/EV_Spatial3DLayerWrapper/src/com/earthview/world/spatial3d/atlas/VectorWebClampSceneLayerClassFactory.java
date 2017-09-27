package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class VectorWebClampSceneLayerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		VectorWebClampSceneLayer emptyInstance = new VectorWebClampSceneLayer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
