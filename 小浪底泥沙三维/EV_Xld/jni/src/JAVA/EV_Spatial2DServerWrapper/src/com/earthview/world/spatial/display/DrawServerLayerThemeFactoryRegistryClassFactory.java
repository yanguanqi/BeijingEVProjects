package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DrawServerLayerThemeFactoryRegistryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DrawServerLayerThemeFactoryRegistry emptyInstance = new DrawServerLayerThemeFactoryRegistry(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
