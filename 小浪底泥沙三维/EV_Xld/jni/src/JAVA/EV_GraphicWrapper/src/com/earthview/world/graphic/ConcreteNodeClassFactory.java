package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ConcreteNodeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ConcreteNode emptyInstance = new ConcreteNode(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
