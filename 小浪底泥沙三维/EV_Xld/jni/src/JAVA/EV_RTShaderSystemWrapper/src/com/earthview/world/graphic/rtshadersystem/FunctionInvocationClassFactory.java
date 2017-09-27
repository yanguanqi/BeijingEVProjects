package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class FunctionInvocationClassFactory implements IClassFactory {
	public BaseObject create()
	{
		FunctionInvocation emptyInstance = new FunctionInvocation(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
