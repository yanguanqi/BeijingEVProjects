package com.earthview.world.spatial3d.kmlmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class KmlModelClassFactory implements IClassFactory {
	public BaseObject create()
	{
		KmlModel emptyInstance = new KmlModel(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
