package com.earthview.meshoptimize;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MeshOptimizeParamsClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MeshOptimizeParams emptyInstance = new MeshOptimizeParams(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
