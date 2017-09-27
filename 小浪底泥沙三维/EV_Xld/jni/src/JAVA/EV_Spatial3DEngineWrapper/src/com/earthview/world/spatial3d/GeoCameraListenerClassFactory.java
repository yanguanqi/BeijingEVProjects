package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GeoCameraListenerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GeoCameraListener emptyInstance = new GeoCameraListener(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
