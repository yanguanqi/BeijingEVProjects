package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MemoryStreamResultClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MemoryStreamResult emptyInstance = new MemoryStreamResult(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
