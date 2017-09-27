package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IdatasetoperatorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Idatasetoperator emptyInstance = new Idatasetoperator(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
