package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ConcreteNodePtrClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ConcreteNodePtr emptyInstance = new ConcreteNodePtr(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
