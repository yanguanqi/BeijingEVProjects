package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class ParamCommandClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ParamCommand emptyInstance = new ParamCommand(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
