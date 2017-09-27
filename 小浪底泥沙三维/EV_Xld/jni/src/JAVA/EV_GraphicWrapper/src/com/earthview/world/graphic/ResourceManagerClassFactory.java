package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ResourceManagerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ResourceManager emptyInstance = new ResourceManager(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
