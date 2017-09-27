package com.earthview.world.spatial3d.kmlmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class KmlFlyToTimeMapClassFactory implements IClassFactory {
	public BaseObject create()
	{
		KmlFlyToTimeMap emptyInstance = new KmlFlyToTimeMap(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
