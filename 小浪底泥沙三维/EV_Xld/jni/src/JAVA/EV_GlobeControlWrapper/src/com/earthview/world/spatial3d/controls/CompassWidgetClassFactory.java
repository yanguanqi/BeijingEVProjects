package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CompassWidgetClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CompassWidget emptyInstance = new CompassWidget(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
