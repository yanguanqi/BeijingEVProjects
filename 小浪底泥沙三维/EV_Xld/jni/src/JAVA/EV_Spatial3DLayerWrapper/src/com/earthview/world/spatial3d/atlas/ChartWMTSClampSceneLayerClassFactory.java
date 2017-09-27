package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ChartWMTSClampSceneLayerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ChartWMTSClampSceneLayer emptyInstance = new ChartWMTSClampSceneLayer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
