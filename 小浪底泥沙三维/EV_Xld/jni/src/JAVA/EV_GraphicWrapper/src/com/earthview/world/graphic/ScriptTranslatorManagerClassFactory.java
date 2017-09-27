package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ScriptTranslatorManagerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ScriptTranslatorManager emptyInstance = new ScriptTranslatorManager(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
