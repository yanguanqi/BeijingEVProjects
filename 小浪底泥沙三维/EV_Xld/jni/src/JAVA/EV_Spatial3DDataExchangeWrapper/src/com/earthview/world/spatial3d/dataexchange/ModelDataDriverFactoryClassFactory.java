package com.earthview.world.spatial3d.dataexchange;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelDataDriverFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ModelDataDriverFactory emptyInstance = new ModelDataDriverFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
