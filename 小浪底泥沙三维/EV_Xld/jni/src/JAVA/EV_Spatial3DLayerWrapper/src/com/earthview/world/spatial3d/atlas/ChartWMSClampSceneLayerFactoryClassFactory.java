package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ChartWMSClampSceneLayerFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ChartWMSClampSceneLayerFactory emptyInstance = new ChartWMSClampSceneLayerFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
