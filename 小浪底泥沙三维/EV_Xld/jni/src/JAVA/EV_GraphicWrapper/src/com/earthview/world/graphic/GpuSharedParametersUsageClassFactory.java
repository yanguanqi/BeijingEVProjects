package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GpuSharedParametersUsageClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GpuSharedParametersUsage emptyInstance = new GpuSharedParametersUsage(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
