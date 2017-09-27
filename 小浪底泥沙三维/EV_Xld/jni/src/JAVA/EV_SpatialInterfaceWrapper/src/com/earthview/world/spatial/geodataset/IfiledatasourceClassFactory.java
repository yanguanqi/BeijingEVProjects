package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IfiledatasourceClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ifiledatasource emptyInstance = new Ifiledatasource(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
