package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ScriptLoaderClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ScriptLoader emptyInstance = new ScriptLoader(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
