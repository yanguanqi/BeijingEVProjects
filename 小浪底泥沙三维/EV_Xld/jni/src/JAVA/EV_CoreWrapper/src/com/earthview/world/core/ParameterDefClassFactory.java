package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class ParameterDefClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ParameterDef emptyInstance = new ParameterDef(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
