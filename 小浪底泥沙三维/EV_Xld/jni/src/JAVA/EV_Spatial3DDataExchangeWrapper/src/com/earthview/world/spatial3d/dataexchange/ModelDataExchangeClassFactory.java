package com.earthview.world.spatial3d.dataexchange;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelDataExchangeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ModelDataExchange emptyInstance = new ModelDataExchange(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
