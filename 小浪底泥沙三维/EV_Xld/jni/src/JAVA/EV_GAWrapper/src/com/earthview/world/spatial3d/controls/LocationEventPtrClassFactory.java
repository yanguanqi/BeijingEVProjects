package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LocationEventPtrClassFactory implements IClassFactory {
	public BaseObject create()
	{
		LocationEventPtr emptyInstance = new LocationEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
