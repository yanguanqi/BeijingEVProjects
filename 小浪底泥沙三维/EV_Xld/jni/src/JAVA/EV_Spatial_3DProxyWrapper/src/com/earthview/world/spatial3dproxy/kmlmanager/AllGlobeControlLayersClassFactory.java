package com.earthview.world.spatial3dproxy.kmlmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class AllGlobeControlLayersClassFactory implements IClassFactory {
	public BaseObject create()
	{
		AllGlobeControlLayers emptyInstance = new AllGlobeControlLayers(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
