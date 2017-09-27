package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class HighLevelGpuProgramManagerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		HighLevelGpuProgramManager emptyInstance = new HighLevelGpuProgramManager(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
