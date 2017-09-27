package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GeoPolylineExClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GeoPolylineEx emptyInstance = new GeoPolylineEx(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
