package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GpuConstantDefinitionMapClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GpuConstantDefinitionMap emptyInstance = new GpuConstantDefinitionMap(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
