package com.earthview.world.spatial3dproxy.kmlmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class KmlFeatureEditToolManagerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		KmlFeatureEditToolManager emptyInstance = new KmlFeatureEditToolManager(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
