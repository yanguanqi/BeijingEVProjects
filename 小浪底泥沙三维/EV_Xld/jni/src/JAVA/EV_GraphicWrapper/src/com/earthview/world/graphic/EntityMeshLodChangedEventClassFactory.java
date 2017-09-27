package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EntityMeshLodChangedEventClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EntityMeshLodChangedEvent emptyInstance = new EntityMeshLodChangedEvent(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
