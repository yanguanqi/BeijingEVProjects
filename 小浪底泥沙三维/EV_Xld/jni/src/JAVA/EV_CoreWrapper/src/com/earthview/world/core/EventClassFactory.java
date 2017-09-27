package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class EventClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Event emptyInstance = new Event(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
