package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EntityLayerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EntityLayer emptyInstance = new EntityLayer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
