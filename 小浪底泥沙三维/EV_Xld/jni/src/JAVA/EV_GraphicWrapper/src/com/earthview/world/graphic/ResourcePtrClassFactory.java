package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ResourcePtrClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ResourcePtr emptyInstance = new ResourcePtr(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
