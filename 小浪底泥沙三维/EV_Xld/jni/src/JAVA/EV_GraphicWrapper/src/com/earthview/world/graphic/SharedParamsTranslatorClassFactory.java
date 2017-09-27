package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SharedParamsTranslatorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SharedParamsTranslator emptyInstance = new SharedParamsTranslator(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
