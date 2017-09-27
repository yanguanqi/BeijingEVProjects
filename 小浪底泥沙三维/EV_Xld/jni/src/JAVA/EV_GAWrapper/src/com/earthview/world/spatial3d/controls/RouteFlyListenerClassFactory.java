package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RouteFlyListenerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RouteFlyListener emptyInstance = new RouteFlyListener(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
