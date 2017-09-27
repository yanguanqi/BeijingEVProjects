package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class KmlTourEventPtrClassFactory implements IClassFactory {
	public BaseObject create()
	{
		KmlTourEventPtr emptyInstance = new KmlTourEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
