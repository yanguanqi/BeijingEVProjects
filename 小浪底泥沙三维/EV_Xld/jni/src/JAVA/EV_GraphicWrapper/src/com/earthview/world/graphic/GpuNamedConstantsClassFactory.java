package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GpuNamedConstantsClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GpuNamedConstants emptyInstance = new GpuNamedConstants(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
