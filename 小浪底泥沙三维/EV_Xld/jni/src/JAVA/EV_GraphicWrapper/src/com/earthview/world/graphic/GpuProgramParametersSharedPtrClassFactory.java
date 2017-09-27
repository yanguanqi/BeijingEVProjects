package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GpuProgramParametersSharedPtrClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GpuProgramParametersSharedPtr emptyInstance = new GpuProgramParametersSharedPtr(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
