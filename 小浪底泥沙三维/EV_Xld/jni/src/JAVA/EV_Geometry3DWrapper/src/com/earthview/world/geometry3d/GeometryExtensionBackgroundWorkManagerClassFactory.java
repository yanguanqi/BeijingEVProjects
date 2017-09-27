package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GeometryExtensionBackgroundWorkManagerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GeometryExtensionBackgroundWorkManager emptyInstance = new GeometryExtensionBackgroundWorkManager(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
