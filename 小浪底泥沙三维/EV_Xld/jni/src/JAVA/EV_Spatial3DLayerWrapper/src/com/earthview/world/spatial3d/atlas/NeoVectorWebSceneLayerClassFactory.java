package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class NeoVectorWebSceneLayerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		NeoVectorWebSceneLayer emptyInstance = new NeoVectorWebSceneLayer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
