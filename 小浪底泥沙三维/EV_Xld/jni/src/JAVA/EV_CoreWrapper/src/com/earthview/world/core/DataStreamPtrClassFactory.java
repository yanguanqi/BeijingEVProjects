package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class DataStreamPtrClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DataStreamPtr emptyInstance = new DataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
