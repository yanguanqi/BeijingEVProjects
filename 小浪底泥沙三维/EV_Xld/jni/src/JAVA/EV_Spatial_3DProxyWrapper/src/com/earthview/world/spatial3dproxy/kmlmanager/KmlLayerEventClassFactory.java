package com.earthview.world.spatial3dproxy.kmlmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class KmlLayerEventClassFactory implements IClassFactory {
	public BaseObject create()
	{
		KmlLayerEvent emptyInstance = new KmlLayerEvent(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
