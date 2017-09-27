package com.earthview.world.spatial3dproxy.kmlmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class KmlEventClassFactory implements IClassFactory {
	public BaseObject create()
	{
		KmlEvent emptyInstance = new KmlEvent(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
