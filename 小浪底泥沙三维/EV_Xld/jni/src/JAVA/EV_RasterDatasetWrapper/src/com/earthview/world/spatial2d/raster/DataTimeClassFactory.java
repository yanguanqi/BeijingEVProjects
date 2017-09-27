package com.earthview.world.spatial2d.raster;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DataTimeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DataTime emptyInstance = new DataTime(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
