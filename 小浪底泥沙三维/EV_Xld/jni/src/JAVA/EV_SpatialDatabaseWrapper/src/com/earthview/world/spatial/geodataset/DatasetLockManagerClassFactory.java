package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DatasetLockManagerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DatasetLockManager emptyInstance = new DatasetLockManager(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
