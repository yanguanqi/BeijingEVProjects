package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ChartClampSceneLayerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ChartClampSceneLayer emptyInstance = new ChartClampSceneLayer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
