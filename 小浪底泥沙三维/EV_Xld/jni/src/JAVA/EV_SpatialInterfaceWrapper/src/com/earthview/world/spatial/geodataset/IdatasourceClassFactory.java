package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IdatasourceClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Idatasource emptyInstance = new Idatasource(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
