package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EvwebdatasetiteratorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Evwebdatasetiterator emptyInstance = new Evwebdatasetiterator(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
