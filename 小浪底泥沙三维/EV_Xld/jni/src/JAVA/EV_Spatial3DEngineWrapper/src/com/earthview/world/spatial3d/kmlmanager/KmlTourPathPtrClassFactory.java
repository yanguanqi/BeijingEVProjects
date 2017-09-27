package com.earthview.world.spatial3d.kmlmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class KmlTourPathPtrClassFactory implements IClassFactory {
	public BaseObject create()
	{
		KmlTourPathPtr emptyInstance = new KmlTourPathPtr(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
