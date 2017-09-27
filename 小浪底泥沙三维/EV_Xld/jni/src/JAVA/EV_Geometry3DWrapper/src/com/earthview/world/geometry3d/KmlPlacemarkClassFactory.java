package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class KmlPlacemarkClassFactory implements IClassFactory {
	public BaseObject create()
	{
		KmlPlacemark emptyInstance = new KmlPlacemark(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
