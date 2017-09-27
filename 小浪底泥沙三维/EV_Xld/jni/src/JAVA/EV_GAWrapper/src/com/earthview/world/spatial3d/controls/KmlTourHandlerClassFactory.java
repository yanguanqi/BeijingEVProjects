package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class KmlTourHandlerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		KmlTourHandler emptyInstance = new KmlTourHandler(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
