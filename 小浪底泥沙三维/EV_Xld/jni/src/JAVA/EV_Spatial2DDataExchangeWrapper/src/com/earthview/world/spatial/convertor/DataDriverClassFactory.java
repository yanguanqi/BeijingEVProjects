package com.earthview.world.spatial.convertor;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DataDriverClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DataDriver emptyInstance = new DataDriver(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
