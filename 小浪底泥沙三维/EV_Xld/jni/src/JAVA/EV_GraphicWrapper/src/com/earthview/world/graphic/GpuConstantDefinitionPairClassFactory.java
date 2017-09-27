package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GpuConstantDefinitionPairClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GpuConstantDefinitionPair emptyInstance = new GpuConstantDefinitionPair(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
