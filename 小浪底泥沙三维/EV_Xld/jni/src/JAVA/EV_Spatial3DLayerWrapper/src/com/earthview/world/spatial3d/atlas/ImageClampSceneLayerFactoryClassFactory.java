package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ImageClampSceneLayerFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ImageClampSceneLayerFactory emptyInstance = new ImageClampSceneLayerFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
