package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class AtomicIntClassFactory implements IClassFactory {
	public BaseObject create()
	{
		AtomicInt emptyInstance = new AtomicInt(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
