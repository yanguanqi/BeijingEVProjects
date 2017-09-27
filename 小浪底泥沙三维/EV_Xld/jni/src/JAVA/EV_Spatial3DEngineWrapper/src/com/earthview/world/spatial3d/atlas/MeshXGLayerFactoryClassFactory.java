package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MeshXGLayerFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MeshXGLayerFactory emptyInstance = new MeshXGLayerFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
