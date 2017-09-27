package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class ReadLockerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ReadLocker emptyInstance = new ReadLocker(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
