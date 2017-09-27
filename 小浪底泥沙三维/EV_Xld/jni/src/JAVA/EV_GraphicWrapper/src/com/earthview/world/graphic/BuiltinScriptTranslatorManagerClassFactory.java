package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class BuiltinScriptTranslatorManagerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		BuiltinScriptTranslatorManager emptyInstance = new BuiltinScriptTranslatorManager(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
