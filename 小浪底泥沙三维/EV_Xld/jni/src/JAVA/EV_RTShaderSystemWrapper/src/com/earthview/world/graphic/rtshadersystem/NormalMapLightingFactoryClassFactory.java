package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class NormalMapLightingFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		NormalMapLightingFactory emptyInstance = new NormalMapLightingFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
