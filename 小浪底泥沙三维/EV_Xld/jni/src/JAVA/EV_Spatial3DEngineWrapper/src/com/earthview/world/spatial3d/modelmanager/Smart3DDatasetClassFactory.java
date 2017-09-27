package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Smart3DDatasetClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Smart3DDataset emptyInstance = new Smart3DDataset(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
