package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.spatial.*;
import com.earthview.world.core.*;

public class LocalDemDatasetClassFactory implements IClassFactory {
	public BaseObject create()
	{
		LocalDemDataset emptyInstance = new LocalDemDataset(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
