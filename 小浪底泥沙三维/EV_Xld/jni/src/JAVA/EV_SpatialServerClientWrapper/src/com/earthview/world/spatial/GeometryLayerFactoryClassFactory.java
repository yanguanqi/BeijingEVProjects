package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GeometryLayerFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GeometryLayerFactory emptyInstance = new GeometryLayerFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
