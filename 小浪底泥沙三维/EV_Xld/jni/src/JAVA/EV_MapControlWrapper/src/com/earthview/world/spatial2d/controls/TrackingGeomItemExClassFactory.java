package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TrackingGeomItemExClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TrackingGeomItemEx emptyInstance = new TrackingGeomItemEx(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
