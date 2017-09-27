package com.earthview.world.frameworkproxy.atlasmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class AtlasTreeEventClassFactory implements IClassFactory {
	public BaseObject create()
	{
		AtlasTreeEvent emptyInstance = new AtlasTreeEvent(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
