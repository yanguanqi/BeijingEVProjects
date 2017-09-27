package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class InstanceBatchHWClassFactory implements IClassFactory {
	public BaseObject create()
	{
		InstanceBatchHW emptyInstance = new InstanceBatchHW(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
