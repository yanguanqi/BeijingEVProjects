package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IfeatureiteratorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ifeatureiterator emptyInstance = new Ifeatureiterator(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
