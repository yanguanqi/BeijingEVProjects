package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EntityFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EntityFactory emptyInstance = new EntityFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
