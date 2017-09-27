package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GpuLogicalIndexUseMapClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GpuLogicalIndexUseMap emptyInstance = new GpuLogicalIndexUseMap(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
