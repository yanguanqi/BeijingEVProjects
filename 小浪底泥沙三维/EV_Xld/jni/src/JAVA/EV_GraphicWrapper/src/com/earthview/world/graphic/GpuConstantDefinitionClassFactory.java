package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GpuConstantDefinitionClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GpuConstantDefinition emptyInstance = new GpuConstantDefinition(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
