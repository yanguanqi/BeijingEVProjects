package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class NeoVectorWebSceneLayerFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		NeoVectorWebSceneLayerFactory emptyInstance = new NeoVectorWebSceneLayerFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
