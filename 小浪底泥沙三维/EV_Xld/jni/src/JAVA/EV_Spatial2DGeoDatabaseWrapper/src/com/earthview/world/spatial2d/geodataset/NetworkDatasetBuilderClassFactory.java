package com.earthview.world.spatial2d.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class NetworkDatasetBuilderClassFactory implements IClassFactory {
	public BaseObject create()
	{
		NetworkDatasetBuilder emptyInstance = new NetworkDatasetBuilder(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
