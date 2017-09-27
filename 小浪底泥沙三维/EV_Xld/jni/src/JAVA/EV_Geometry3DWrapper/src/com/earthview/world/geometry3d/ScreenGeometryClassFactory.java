package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ScreenGeometryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ScreenGeometry emptyInstance = new ScreenGeometry(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
