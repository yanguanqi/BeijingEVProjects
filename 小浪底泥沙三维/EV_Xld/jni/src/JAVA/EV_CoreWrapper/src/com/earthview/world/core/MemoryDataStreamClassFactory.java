package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class MemoryDataStreamClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MemoryDataStream emptyInstance = new MemoryDataStream(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
