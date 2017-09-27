package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GpuSharedParametersClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GpuSharedParameters emptyInstance = new GpuSharedParameters(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
