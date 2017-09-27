package com.earthview.world.spatial.vectorfileparser;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class VectorFileDataSourceFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		VectorFileDataSourceFactory emptyInstance = new VectorFileDataSourceFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
