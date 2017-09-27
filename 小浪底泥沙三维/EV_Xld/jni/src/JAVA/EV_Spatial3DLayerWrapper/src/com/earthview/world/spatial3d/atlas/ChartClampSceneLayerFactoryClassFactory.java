package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ChartClampSceneLayerFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ChartClampSceneLayerFactory emptyInstance = new ChartClampSceneLayerFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
