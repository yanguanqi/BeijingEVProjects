package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelDatasetClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ModelDataset emptyInstance = new ModelDataset(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
