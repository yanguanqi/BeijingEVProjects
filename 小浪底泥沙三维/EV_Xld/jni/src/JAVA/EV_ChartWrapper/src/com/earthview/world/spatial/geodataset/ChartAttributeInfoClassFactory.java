package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.spatial.geodataset.*;
import com.earthview.world.core.*;

public class ChartAttributeInfoClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ChartAttributeInfo emptyInstance = new ChartAttributeInfo(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
