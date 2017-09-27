package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class ReadWriteLockClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ReadWriteLock emptyInstance = new ReadWriteLock(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
