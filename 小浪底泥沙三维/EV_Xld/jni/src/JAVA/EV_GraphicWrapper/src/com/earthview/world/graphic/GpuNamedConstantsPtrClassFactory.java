package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GpuNamedConstantsPtrClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GpuNamedConstantsPtr emptyInstance = new GpuNamedConstantsPtr(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
