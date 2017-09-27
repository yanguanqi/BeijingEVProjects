package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class EventDispatcherClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EventDispatcher emptyInstance = new EventDispatcher(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
