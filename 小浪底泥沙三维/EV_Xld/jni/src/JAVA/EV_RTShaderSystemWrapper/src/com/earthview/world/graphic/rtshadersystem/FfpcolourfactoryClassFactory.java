package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class FfpcolourfactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ffpcolourfactory emptyInstance = new Ffpcolourfactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
