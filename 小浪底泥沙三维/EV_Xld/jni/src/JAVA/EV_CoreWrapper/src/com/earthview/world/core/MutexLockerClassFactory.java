package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class MutexLockerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MutexLocker emptyInstance = new MutexLocker(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
