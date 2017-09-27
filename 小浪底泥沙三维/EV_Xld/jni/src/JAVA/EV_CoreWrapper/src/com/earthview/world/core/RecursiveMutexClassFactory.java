package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class RecursiveMutexClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RecursiveMutex emptyInstance = new RecursiveMutex(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
