package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MeshXLayerFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MeshXLayerFactory emptyInstance = new MeshXLayerFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
