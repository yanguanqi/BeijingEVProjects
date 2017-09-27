package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class WmtsdatasetiteratorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Wmtsdatasetiterator emptyInstance = new Wmtsdatasetiterator(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
