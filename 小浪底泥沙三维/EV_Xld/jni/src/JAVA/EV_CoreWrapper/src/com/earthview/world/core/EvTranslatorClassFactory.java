package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class EvTranslatorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EvTranslator emptyInstance = new EvTranslator(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
