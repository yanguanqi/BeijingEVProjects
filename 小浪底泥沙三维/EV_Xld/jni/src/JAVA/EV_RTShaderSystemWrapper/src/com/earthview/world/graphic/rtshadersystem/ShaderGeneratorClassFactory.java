package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ShaderGeneratorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ShaderGenerator emptyInstance = new ShaderGenerator(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
