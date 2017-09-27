package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class DynLibManagerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DynLibManager emptyInstance = new DynLibManager(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
