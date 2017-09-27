package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class VisibleObjectListenerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		VisibleObjectListener emptyInstance = new VisibleObjectListener(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
