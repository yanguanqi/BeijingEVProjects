package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class InstanceBatchClassFactory implements IClassFactory {
	public BaseObject create()
	{
		InstanceBatch emptyInstance = new InstanceBatch(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
