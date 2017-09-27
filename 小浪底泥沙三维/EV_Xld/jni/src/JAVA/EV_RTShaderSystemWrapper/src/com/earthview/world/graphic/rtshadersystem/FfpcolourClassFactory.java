package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class FfpcolourClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ffpcolour emptyInstance = new Ffpcolour(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
