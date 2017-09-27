package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PerPixelLightingFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		PerPixelLightingFactory emptyInstance = new PerPixelLightingFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
