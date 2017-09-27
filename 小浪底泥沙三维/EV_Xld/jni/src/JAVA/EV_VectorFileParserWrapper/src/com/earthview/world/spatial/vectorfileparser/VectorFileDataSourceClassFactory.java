package com.earthview.world.spatial.vectorfileparser;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class VectorFileDataSourceClassFactory implements IClassFactory {
	public BaseObject create()
	{
		VectorFileDataSource emptyInstance = new VectorFileDataSource(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
