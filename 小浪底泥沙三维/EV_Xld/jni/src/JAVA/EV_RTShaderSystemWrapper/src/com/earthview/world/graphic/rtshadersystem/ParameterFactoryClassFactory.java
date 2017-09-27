package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ParameterFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ParameterFactory emptyInstance = new ParameterFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
