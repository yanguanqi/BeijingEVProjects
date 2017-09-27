package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class WriteLockerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		WriteLocker emptyInstance = new WriteLocker(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
