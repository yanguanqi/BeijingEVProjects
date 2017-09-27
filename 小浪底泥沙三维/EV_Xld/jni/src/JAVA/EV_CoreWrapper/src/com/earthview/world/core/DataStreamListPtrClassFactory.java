package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class DataStreamListPtrClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DataStreamListPtr emptyInstance = new DataStreamListPtr(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
