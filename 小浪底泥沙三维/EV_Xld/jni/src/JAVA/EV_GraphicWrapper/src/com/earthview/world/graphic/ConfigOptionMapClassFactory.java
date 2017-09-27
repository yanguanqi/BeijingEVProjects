package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ConfigOptionMapClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ConfigOptionMap emptyInstance = new ConfigOptionMap(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
