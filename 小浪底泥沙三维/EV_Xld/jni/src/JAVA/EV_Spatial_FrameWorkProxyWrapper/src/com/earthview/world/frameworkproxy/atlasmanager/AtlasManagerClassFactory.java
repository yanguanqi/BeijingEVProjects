package com.earthview.world.frameworkproxy.atlasmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class AtlasManagerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		AtlasManager emptyInstance = new AtlasManager(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
