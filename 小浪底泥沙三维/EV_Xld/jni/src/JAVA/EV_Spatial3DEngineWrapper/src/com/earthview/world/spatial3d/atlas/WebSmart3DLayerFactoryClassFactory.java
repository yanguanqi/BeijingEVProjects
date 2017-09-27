package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class WebSmart3DLayerFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		WebSmart3DLayerFactory emptyInstance = new WebSmart3DLayerFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
