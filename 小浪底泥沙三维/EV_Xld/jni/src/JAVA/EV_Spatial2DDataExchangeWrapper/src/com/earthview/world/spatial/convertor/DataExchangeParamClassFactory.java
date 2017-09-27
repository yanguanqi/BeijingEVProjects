package com.earthview.world.spatial.convertor;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DataExchangeParamClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DataExchangeParam emptyInstance = new DataExchangeParam(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
