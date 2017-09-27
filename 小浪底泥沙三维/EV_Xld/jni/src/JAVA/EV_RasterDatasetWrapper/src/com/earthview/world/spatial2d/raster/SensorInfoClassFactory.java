package com.earthview.world.spatial2d.raster;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SensorInfoClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SensorInfo emptyInstance = new SensorInfo(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
