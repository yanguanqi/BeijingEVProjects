package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class VisibleObjectPtrClassFactory implements IClassFactory {
	public BaseObject create()
	{
		VisibleObjectPtr emptyInstance = new VisibleObjectPtr(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
