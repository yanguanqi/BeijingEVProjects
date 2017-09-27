package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ConfigOptionClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ConfigOption emptyInstance = new ConfigOption(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
