package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EntityMaterialLodChangedEventClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EntityMaterialLodChangedEvent emptyInstance = new EntityMaterialLodChangedEvent(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
