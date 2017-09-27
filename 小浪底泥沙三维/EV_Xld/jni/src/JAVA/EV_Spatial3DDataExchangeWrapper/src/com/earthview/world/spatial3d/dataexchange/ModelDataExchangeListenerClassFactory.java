package com.earthview.world.spatial3d.dataexchange;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelDataExchangeListenerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ModelDataExchangeListener emptyInstance = new ModelDataExchangeListener(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
