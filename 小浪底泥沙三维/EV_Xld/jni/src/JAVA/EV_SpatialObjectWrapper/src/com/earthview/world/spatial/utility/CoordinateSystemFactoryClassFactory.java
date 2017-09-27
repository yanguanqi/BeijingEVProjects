package com.earthview.world.spatial.utility;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CoordinateSystemFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CoordinateSystemFactory emptyInstance = new CoordinateSystemFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
