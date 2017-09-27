package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ResourceClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Resource emptyInstance = new Resource(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
