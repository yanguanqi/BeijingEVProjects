package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class InstanceBatchShaderClassFactory implements IClassFactory {
	public BaseObject create()
	{
		InstanceBatchShader emptyInstance = new InstanceBatchShader(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
