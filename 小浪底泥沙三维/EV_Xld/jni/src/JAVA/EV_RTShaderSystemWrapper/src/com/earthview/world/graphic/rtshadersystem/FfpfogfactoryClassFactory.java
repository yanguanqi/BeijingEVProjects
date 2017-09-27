package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class FfpfogfactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ffpfogfactory emptyInstance = new Ffpfogfactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
