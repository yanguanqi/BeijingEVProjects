package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ResourceGroupListenerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ResourceGroupListener emptyInstance = new ResourceGroupListener(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
