package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class FfprenderstatebuilderClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ffprenderstatebuilder emptyInstance = new Ffprenderstatebuilder(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
