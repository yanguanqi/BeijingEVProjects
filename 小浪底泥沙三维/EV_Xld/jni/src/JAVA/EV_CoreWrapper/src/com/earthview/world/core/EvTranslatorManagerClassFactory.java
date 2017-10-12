package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class EvTranslatorManagerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EvTranslatorManager emptyInstance = new EvTranslatorManager(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
