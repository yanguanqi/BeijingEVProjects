package com.earthview.world.spatial3dproxy.kmlmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class KmlFileEventClassFactory implements IClassFactory {
	public BaseObject create()
	{
		KmlFileEvent emptyInstance = new KmlFileEvent(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
