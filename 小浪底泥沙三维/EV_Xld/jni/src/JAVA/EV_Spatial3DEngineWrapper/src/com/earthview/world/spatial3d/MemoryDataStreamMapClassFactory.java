package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MemoryDataStreamMapClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MemoryDataStreamMap emptyInstance = new MemoryDataStreamMap(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
