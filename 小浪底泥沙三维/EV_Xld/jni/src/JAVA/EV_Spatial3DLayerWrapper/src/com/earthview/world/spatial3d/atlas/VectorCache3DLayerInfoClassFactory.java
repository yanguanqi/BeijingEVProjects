package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class VectorCache3DLayerInfoClassFactory implements IClassFactory {
	public BaseObject create()
	{
		VectorCache3DLayerInfo emptyInstance = new VectorCache3DLayerInfo(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
