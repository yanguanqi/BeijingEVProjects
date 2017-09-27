package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class FltSerializerFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		FltSerializerFactory emptyInstance = new FltSerializerFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
