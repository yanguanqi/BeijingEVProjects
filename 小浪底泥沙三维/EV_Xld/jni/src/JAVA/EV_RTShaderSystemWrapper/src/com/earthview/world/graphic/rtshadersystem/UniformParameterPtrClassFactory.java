package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class UniformParameterPtrClassFactory implements IClassFactory {
	public BaseObject create()
	{
		UniformParameterPtr emptyInstance = new UniformParameterPtr(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
