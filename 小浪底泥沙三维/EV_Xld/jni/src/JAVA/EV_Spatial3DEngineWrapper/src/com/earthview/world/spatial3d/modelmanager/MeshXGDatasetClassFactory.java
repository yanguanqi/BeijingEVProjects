package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MeshXGDatasetClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MeshXGDataset emptyInstance = new MeshXGDataset(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
