package com.earthview.world.frameworkproxy.atlasmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class AtlasTreeEventDataClassFactory implements IClassFactory {
	public BaseObject create()
	{
		AtlasTreeEventData emptyInstance = new AtlasTreeEventData(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
