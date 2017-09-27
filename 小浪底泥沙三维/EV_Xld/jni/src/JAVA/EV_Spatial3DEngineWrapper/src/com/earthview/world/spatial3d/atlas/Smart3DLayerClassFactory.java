package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Smart3DLayerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Smart3DLayer emptyInstance = new Smart3DLayer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
