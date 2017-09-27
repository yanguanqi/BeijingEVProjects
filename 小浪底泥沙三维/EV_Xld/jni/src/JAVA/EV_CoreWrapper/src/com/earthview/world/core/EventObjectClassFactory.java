package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class EventObjectClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EventObject emptyInstance = new EventObject(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
