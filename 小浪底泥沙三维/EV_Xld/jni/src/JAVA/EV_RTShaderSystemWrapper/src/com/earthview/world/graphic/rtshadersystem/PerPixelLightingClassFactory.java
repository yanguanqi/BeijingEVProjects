package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PerPixelLightingClassFactory implements IClassFactory {
	public BaseObject create()
	{
		PerPixelLighting emptyInstance = new PerPixelLighting(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
