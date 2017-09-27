package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LocationEventClassFactory implements IClassFactory {
	public BaseObject create()
	{
		LocationEvent emptyInstance = new LocationEvent(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
