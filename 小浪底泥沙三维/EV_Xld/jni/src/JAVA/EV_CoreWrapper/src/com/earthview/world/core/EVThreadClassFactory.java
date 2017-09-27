package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class EVThreadClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EVThread emptyInstance = new EVThread(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
