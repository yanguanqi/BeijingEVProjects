package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ImageGroupLayerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ImageGroupLayer emptyInstance = new ImageGroupLayer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
