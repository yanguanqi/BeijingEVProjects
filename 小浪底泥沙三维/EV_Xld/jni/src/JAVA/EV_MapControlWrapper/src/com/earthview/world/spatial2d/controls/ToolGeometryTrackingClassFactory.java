package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ToolGeometryTrackingClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ToolGeometryTracking emptyInstance = new ToolGeometryTracking(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
