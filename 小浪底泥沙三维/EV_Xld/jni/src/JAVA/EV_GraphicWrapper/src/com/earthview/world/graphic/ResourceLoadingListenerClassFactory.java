package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ResourceLoadingListenerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ResourceLoadingListener emptyInstance = new ResourceLoadingListener(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
