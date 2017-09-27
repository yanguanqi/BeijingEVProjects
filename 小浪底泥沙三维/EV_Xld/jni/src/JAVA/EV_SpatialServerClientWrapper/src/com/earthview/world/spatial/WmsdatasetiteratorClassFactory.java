package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class WmsdatasetiteratorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Wmsdatasetiterator emptyInstance = new Wmsdatasetiterator(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
