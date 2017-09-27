package com.earthview.world.spatiallasconvertproxy;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LasOptimizeToolClassFactory implements IClassFactory {
	public BaseObject create()
	{
		LasOptimizeTool emptyInstance = new LasOptimizeTool(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
