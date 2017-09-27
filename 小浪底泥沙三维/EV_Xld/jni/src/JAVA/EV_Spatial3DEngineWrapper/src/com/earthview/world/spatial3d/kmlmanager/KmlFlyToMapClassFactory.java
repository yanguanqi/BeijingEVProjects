package com.earthview.world.spatial3d.kmlmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class KmlFlyToMapClassFactory implements IClassFactory {
	public BaseObject create()
	{
		KmlFlyToMap emptyInstance = new KmlFlyToMap(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
