package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class FfptransformClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ffptransform emptyInstance = new Ffptransform(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
