package com.earthview.world.spatial.convertor;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DataDriverFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DataDriverFactory emptyInstance = new DataDriverFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
