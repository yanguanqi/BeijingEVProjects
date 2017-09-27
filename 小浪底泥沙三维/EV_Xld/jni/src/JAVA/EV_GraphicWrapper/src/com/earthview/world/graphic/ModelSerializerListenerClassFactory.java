package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelSerializerListenerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ModelSerializerListener emptyInstance = new ModelSerializerListener(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
