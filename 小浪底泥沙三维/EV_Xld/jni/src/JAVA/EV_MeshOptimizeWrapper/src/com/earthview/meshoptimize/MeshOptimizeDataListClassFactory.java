package com.earthview.meshoptimize;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MeshOptimizeDataListClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MeshOptimizeDataList emptyInstance = new MeshOptimizeDataList(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
