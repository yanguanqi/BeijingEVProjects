package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class OgcwebserviceboundingboxClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ogcwebserviceboundingbox emptyInstance = new Ogcwebserviceboundingbox(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
