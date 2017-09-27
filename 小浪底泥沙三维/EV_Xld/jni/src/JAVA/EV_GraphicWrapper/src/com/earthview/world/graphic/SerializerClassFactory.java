package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SerializerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Serializer emptyInstance = new Serializer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
