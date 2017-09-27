package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ProfilerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Profiler emptyInstance = new Profiler(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
