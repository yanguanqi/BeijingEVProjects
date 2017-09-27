package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class WebSmart3DLayerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		WebSmart3DLayer emptyInstance = new WebSmart3DLayer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
