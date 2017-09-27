package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MeshXGLayerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MeshXGLayer emptyInstance = new MeshXGLayer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
