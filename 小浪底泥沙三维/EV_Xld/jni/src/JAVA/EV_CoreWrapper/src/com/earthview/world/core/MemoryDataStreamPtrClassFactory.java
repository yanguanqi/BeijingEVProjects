package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class MemoryDataStreamPtrClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MemoryDataStreamPtr emptyInstance = new MemoryDataStreamPtr(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
