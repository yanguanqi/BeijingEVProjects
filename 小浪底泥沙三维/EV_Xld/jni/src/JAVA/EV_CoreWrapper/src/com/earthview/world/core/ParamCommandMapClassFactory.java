package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class ParamCommandMapClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ParamCommandMap emptyInstance = new ParamCommandMap(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
