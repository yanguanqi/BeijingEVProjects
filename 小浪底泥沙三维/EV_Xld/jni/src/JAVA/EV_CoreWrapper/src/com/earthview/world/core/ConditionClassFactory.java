package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class ConditionClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Condition emptyInstance = new Condition(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
