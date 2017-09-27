package com.earthview.world.spatial3d.kmlmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class KmlFlyToClassFactory implements IClassFactory {
	public BaseObject create()
	{
		KmlFlyTo emptyInstance = new KmlFlyTo(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
