package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class OgcwmsdatasourceserverfactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ogcwmsdatasourceserverfactory emptyInstance = new Ogcwmsdatasourceserverfactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
