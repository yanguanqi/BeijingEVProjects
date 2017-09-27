package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class ThreadFuncClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ThreadFunc emptyInstance = new ThreadFunc(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
