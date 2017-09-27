package com.earthview.world.spatial3d.kmlmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class KmlTourPathClassFactory implements IClassFactory {
	public BaseObject create()
	{
		KmlTourPath emptyInstance = new KmlTourPath(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
