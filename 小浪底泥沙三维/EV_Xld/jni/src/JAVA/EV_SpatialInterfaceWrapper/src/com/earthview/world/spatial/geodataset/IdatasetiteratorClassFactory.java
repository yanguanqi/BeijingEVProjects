package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IdatasetiteratorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Idatasetiterator emptyInstance = new Idatasetiterator(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
