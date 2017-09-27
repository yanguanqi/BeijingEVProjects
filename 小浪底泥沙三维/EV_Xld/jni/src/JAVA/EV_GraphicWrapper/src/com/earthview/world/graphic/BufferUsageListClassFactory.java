package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class BufferUsageListClassFactory implements IClassFactory {
	public BaseObject create()
	{
		BufferUsageList emptyInstance = new BufferUsageList(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
