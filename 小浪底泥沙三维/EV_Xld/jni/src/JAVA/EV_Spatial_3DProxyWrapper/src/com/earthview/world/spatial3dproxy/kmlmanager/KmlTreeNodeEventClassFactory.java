package com.earthview.world.spatial3dproxy.kmlmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class KmlTreeNodeEventClassFactory implements IClassFactory {
	public BaseObject create()
	{
		KmlTreeNodeEvent emptyInstance = new KmlTreeNodeEvent(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
