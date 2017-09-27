package com.earthview.meshoptimize;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelLODGeneratorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ModelLODGenerator emptyInstance = new ModelLODGenerator(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
