package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MeshSerializerFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MeshSerializerFactory emptyInstance = new MeshSerializerFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
