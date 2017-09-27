package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MeshLodUsageClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MeshLodUsage emptyInstance = new MeshLodUsage(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
