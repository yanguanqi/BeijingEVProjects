package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ResourceDatasetClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ResourceDataset emptyInstance = new ResourceDataset(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
