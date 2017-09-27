package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class NormalMapLightingClassFactory implements IClassFactory {
	public BaseObject create()
	{
		NormalMapLighting emptyInstance = new NormalMapLighting(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
