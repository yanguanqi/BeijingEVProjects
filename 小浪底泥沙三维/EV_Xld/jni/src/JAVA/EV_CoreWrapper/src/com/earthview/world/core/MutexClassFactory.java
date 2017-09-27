package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class MutexClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Mutex emptyInstance = new Mutex(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
