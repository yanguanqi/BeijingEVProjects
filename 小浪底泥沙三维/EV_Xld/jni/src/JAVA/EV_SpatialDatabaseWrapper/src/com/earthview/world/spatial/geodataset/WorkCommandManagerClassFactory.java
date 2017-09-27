package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class WorkCommandManagerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		WorkCommandManager emptyInstance = new WorkCommandManager(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
