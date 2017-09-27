package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class ParameterListClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ParameterList emptyInstance = new ParameterList(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
