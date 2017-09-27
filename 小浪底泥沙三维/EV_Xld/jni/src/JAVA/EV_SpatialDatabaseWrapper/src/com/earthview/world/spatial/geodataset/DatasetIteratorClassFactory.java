package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DatasetIteratorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DatasetIterator emptyInstance = new DatasetIterator(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
