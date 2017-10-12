package com.earthview.world.spatial2d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SpatialThemeScaleClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SpatialThemeScale emptyInstance = new SpatialThemeScale(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
