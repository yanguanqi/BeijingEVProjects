package com.earthview.world.spatial3d.dataexchange;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelDataDriverClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ModelDataDriver emptyInstance = new ModelDataDriver(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
