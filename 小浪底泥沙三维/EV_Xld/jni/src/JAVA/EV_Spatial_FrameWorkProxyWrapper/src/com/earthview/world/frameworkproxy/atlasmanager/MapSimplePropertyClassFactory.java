package com.earthview.world.frameworkproxy.atlasmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MapSimplePropertyClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MapSimpleProperty emptyInstance = new MapSimpleProperty(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
