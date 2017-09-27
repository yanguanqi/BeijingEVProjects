package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CompassWidgetVisibleEventClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CompassWidgetVisibleEvent emptyInstance = new CompassWidgetVisibleEvent(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
