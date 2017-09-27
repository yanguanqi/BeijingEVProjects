package com.earthview.meshoptimize;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MeshOptimizeDataClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MeshOptimizeData emptyInstance = new MeshOptimizeData(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
