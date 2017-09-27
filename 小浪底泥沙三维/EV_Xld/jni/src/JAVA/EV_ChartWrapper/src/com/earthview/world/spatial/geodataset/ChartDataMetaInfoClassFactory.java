package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ChartDataMetaInfoClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ChartDataMetaInfo emptyInstance = new ChartDataMetaInfo(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
