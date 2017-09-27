package com.earthview.world.frameworkproxy.atlasmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class AtlasEventObjectClassFactory implements IClassFactory {
	public BaseObject create()
	{
		AtlasEventObject emptyInstance = new AtlasEventObject(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
