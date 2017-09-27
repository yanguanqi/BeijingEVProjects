package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SpatialUnitConverterClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SpatialUnitConverter emptyInstance = new SpatialUnitConverter(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
