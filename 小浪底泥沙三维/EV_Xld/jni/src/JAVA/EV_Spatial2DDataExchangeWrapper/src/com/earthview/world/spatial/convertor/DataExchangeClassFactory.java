package com.earthview.world.spatial.convertor;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DataExchangeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DataExchange emptyInstance = new DataExchange(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
