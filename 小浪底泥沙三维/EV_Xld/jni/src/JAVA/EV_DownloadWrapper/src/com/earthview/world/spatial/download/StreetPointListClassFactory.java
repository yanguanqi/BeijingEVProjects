package com.earthview.world.spatial.download;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.spatial.geodataset.*;
import com.earthview.world.core.*;

public class StreetPointListClassFactory implements IClassFactory {
	public BaseObject create()
	{
		StreetPointList emptyInstance = new StreetPointList(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
