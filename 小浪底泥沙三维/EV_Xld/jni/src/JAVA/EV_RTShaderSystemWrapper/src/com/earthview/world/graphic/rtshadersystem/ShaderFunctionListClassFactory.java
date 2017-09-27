package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ShaderFunctionListClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ShaderFunctionList emptyInstance = new ShaderFunctionList(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
