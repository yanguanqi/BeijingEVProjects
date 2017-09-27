package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class SemaphoreClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Semaphore emptyInstance = new Semaphore(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
