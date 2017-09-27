package com.earthview.world.spatial3d.dataexchange;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DatasourceHelperClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DatasourceHelper emptyInstance = new DatasourceHelper(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
