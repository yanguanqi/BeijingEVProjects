package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class WebEVLasXGLayerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		WebEVLasXGLayer emptyInstance = new WebEVLasXGLayer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
