package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ConcreteNodeListPtrClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ConcreteNodeListPtr emptyInstance = new ConcreteNodeListPtr(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
