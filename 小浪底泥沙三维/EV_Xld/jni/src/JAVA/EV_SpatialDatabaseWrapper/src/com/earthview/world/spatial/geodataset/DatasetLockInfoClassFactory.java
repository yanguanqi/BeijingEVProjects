package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DatasetLockInfoClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DatasetLockInfo emptyInstance = new DatasetLockInfo(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
