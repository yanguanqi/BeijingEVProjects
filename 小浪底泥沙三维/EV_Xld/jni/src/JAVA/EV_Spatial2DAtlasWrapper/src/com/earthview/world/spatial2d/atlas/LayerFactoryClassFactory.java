package com.earthview.world.spatial2d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LayerFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		LayerFactory emptyInstance = new LayerFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
