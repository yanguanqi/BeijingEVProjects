package com.earthview.world.spatial2d.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class NetworkDatasetClassFactory implements IClassFactory {
	public BaseObject create()
	{
		NetworkDataset emptyInstance = new NetworkDataset(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
