package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class PluginClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Plugin emptyInstance = new Plugin(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
