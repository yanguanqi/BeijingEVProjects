package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GeometryClampSceneLayerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GeometryClampSceneLayer emptyInstance = new GeometryClampSceneLayer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
