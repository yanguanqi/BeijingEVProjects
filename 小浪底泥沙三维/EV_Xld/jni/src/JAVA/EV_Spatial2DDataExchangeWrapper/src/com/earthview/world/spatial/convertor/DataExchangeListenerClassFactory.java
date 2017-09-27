package com.earthview.world.spatial.convertor;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DataExchangeListenerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DataExchangeListener emptyInstance = new DataExchangeListener(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
