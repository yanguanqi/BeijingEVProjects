package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class UniformParameterListClassFactory implements IClassFactory {
	public BaseObject create()
	{
		UniformParameterList emptyInstance = new UniformParameterList(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
