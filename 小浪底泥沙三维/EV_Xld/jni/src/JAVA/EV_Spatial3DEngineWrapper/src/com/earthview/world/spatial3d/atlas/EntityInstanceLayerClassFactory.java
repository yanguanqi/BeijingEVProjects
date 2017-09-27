package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EntityInstanceLayerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EntityInstanceLayer emptyInstance = new EntityInstanceLayer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
