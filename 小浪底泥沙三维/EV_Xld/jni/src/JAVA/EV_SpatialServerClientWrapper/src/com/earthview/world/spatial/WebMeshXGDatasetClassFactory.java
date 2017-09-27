package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.spatial.geodataset.*;
import com.earthview.world.spatial.download.*;
import com.earthview.world.core.*;

public class WebMeshXGDatasetClassFactory implements IClassFactory {
	public BaseObject create()
	{
		WebMeshXGDataset emptyInstance = new WebMeshXGDataset(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
