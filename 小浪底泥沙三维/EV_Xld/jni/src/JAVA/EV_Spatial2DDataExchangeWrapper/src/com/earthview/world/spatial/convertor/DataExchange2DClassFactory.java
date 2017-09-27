package com.earthview.world.spatial.convertor;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DataExchange2DClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DataExchange2D emptyInstance = new DataExchange2D(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
