package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class FfptransformfactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ffptransformfactory emptyInstance = new Ffptransformfactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
