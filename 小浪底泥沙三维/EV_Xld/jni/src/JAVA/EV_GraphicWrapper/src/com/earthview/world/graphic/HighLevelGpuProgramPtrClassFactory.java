package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class HighLevelGpuProgramPtrClassFactory implements IClassFactory {
	public BaseObject create()
	{
		HighLevelGpuProgramPtr emptyInstance = new HighLevelGpuProgramPtr(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
