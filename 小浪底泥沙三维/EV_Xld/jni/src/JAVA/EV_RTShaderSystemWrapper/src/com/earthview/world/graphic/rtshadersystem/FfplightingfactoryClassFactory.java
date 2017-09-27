package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class FfplightingfactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ffplightingfactory emptyInstance = new Ffplightingfactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
