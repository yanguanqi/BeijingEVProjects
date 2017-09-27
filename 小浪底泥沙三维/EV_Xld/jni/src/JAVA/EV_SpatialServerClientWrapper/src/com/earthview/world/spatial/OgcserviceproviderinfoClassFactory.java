package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class OgcserviceproviderinfoClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ogcserviceproviderinfo emptyInstance = new Ogcserviceproviderinfo(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
