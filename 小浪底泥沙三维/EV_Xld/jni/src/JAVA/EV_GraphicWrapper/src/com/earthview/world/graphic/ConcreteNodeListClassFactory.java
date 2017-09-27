package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ConcreteNodeListClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ConcreteNodeList emptyInstance = new ConcreteNodeList(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
