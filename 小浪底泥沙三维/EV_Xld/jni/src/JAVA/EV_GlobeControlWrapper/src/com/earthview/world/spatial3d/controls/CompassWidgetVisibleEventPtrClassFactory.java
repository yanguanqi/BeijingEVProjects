package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CompassWidgetVisibleEventPtrClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CompassWidgetVisibleEventPtr emptyInstance = new CompassWidgetVisibleEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
