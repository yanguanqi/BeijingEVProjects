package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ScriptTranslatorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ScriptTranslator emptyInstance = new ScriptTranslator(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
