package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IdatasourcefactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Idatasourcefactory emptyInstance = new Idatasourcefactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
