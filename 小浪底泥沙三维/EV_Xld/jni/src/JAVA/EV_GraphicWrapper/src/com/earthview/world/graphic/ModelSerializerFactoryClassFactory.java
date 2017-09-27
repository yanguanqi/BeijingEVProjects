package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelSerializerFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ModelSerializerFactory emptyInstance = new ModelSerializerFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
