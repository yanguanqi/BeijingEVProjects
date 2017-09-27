package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MeshTemplateDatasetClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MeshTemplateDataset emptyInstance = new MeshTemplateDataset(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
