package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class FfptexturingfactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ffptexturingfactory emptyInstance = new Ffptexturingfactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
