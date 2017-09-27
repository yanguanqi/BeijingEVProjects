package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.spatial.geodataset.*;
import com.earthview.world.spatial.download.*;
import com.earthview.world.core.*;

public class WebVector3DDatasetClassFactory implements IClassFactory {
	public BaseObject create()
	{
		WebVector3DDataset emptyInstance = new WebVector3DDataset(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
