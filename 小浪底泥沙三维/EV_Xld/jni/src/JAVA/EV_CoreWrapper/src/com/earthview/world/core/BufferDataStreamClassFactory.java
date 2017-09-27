package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class BufferDataStreamClassFactory implements IClassFactory {
	public BaseObject create()
	{
		BufferDataStream emptyInstance = new BufferDataStream(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
