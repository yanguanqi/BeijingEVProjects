package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ChartWMSClampSceneLayerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ChartWMSClampSceneLayer emptyInstance = new ChartWMSClampSceneLayer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
