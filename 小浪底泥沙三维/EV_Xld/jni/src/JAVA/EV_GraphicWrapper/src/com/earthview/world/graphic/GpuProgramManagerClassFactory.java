package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GpuProgramManagerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GpuProgramManager emptyInstance = new GpuProgramManager(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
