package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DrawServerLayerThemeFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DrawServerLayerThemeFactory emptyInstance = new DrawServerLayerThemeFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
