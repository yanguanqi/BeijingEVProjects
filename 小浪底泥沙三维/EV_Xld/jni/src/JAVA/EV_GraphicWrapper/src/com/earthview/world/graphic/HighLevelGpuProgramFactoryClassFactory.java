package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class HighLevelGpuProgramFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		HighLevelGpuProgramFactory emptyInstance = new HighLevelGpuProgramFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
