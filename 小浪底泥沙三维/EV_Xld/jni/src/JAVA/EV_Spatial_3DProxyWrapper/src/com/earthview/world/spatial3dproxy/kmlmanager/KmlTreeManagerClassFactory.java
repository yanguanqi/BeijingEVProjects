package com.earthview.world.spatial3dproxy.kmlmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class KmlTreeManagerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		KmlTreeManager emptyInstance = new KmlTreeManager(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
