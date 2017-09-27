package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class FieldFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		FieldFactory emptyInstance = new FieldFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
