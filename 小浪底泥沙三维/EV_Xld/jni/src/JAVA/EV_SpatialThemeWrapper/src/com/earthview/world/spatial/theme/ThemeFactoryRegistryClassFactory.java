package com.earthview.world.spatial.theme;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ThemeFactoryRegistryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ThemeFactoryRegistry emptyInstance = new ThemeFactoryRegistry(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
