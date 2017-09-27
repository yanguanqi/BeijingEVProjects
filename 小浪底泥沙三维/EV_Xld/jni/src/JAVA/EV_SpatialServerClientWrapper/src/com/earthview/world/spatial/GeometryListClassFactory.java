package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GeometryListClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GeometryList emptyInstance = new GeometryList(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
