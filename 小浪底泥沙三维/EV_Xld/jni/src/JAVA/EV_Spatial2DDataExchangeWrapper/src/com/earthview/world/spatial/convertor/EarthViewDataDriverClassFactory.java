package com.earthview.world.spatial.convertor;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EarthViewDataDriverClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EarthViewDataDriver emptyInstance = new EarthViewDataDriver(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
