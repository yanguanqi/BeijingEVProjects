package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.spatial.geodataset.*;
import com.earthview.world.spatial.download.*;
import com.earthview.world.core.*;

public class WebSmart3DDatasetClassFactory implements IClassFactory {
	public BaseObject create()
	{
		WebSmart3DDataset emptyInstance = new WebSmart3DDataset(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
