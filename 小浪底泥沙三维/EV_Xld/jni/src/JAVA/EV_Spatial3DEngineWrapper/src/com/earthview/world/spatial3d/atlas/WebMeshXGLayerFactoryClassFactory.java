package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class WebMeshXGLayerFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		WebMeshXGLayerFactory emptyInstance = new WebMeshXGLayerFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
