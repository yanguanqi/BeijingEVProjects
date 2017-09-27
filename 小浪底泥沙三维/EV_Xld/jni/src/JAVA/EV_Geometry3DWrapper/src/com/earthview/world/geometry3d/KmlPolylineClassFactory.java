package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class KmlPolylineClassFactory implements IClassFactory {
	public BaseObject create()
	{
		KmlPolyline emptyInstance = new KmlPolyline(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
