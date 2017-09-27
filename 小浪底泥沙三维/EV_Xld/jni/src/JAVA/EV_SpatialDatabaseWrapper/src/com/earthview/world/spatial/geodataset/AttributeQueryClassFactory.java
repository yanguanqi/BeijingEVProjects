package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class AttributeQueryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		AttributeQuery emptyInstance = new AttributeQuery(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
