package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class ParamDictionaryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ParamDictionary emptyInstance = new ParamDictionary(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
