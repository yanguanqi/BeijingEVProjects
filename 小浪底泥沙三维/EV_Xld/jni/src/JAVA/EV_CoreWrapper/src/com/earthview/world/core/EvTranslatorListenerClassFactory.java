package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class EvTranslatorListenerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EvTranslatorListener emptyInstance = new EvTranslatorListener(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
