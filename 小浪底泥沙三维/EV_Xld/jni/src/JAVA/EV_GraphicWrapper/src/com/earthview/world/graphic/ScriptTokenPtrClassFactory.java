package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ScriptTokenPtrClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ScriptTokenPtr emptyInstance = new ScriptTokenPtr(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
