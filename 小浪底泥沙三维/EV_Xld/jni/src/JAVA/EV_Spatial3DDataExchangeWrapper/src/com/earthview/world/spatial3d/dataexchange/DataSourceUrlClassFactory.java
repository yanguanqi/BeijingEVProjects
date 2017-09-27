package com.earthview.world.spatial3d.dataexchange;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DataSourceUrlClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DataSourceUrl emptyInstance = new DataSourceUrl(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
