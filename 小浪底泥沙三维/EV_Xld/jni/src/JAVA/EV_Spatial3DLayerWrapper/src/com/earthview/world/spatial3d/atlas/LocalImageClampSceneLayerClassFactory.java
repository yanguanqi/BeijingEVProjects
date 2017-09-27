package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LocalImageClampSceneLayerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		LocalImageClampSceneLayer emptyInstance = new LocalImageClampSceneLayer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
