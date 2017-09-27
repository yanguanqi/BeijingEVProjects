package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class VectorWebRelativeSceneLayerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		VectorWebRelativeSceneLayer emptyInstance = new VectorWebRelativeSceneLayer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
