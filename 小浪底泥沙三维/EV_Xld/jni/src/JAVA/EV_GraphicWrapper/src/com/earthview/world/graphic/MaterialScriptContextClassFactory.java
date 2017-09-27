package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MaterialScriptContextClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MaterialScriptContext emptyInstance = new MaterialScriptContext(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
