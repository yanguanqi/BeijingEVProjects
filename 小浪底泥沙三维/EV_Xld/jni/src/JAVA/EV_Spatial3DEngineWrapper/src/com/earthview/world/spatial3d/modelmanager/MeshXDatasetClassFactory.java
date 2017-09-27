package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MeshXDatasetClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MeshXDataset emptyInstance = new MeshXDataset(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
