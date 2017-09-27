package com.earthview.meshoptimize;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MeshOptimizeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MeshOptimize emptyInstance = new MeshOptimize(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
