package com.earthview.world.spatial3dproxy.kmlmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class KmlLayerObjectEventClassFactory implements IClassFactory {
	public BaseObject create()
	{
		KmlLayerObjectEvent emptyInstance = new KmlLayerObjectEvent(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
