package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class DataStreamListClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DataStreamList emptyInstance = new DataStreamList(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
