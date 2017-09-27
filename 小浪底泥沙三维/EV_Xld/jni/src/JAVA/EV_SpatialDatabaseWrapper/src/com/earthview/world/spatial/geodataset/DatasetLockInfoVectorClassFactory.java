package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DatasetLockInfoVectorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DatasetLockInfoVector emptyInstance = new DatasetLockInfoVector(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
