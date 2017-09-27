package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ImageClampSceneLayerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ImageClampSceneLayer emptyInstance = new ImageClampSceneLayer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
