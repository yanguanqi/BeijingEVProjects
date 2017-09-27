package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class UniformParameterClassFactory implements IClassFactory {
	public BaseObject create()
	{
		UniformParameter emptyInstance = new UniformParameter(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
