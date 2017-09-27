package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class MemoryDataStreamVectorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MemoryDataStreamVector emptyInstance = new MemoryDataStreamVector(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
