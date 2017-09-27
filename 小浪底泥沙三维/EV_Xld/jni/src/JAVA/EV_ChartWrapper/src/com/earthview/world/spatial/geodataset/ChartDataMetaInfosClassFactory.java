package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ChartDataMetaInfosClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ChartDataMetaInfos emptyInstance = new ChartDataMetaInfos(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
