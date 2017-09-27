package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class ParamDictionaryMapClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ParamDictionaryMap emptyInstance = new ParamDictionaryMap(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
