package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class DynLibClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DynLib emptyInstance = new DynLib(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
