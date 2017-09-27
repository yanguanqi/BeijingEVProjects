package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DataMetaInfosClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DataMetaInfos emptyInstance = new DataMetaInfos(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
