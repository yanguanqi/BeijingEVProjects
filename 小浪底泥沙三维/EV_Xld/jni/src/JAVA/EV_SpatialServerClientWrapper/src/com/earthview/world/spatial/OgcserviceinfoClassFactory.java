package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class OgcserviceinfoClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ogcserviceinfo emptyInstance = new Ogcserviceinfo(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
