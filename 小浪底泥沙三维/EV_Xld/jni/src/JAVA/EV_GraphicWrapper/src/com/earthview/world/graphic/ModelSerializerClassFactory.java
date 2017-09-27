package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelSerializerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ModelSerializer emptyInstance = new ModelSerializer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
