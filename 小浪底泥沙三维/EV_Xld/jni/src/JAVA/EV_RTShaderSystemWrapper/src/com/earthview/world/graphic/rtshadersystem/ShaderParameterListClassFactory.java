package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ShaderParameterListClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ShaderParameterList emptyInstance = new ShaderParameterList(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
