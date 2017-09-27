package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class OgcwmtsdatasourceserverfactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ogcwmtsdatasourceserverfactory emptyInstance = new Ogcwmtsdatasourceserverfactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
