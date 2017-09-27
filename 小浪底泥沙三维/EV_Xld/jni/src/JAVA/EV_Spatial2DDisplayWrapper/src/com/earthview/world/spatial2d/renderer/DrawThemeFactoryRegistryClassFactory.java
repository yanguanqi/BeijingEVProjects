package com.earthview.world.spatial2d.renderer;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DrawThemeFactoryRegistryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DrawThemeFactoryRegistry emptyInstance = new DrawThemeFactoryRegistry(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
