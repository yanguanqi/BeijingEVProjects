package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class InstanceBatchHWVtfClassFactory implements IClassFactory {
	public BaseObject create()
	{
		InstanceBatchHWVtf emptyInstance = new InstanceBatchHWVtf(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
