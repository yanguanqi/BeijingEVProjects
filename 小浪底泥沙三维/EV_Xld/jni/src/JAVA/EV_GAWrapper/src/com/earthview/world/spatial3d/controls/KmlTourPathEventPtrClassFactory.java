package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class KmlTourPathEventPtrClassFactory implements IClassFactory {
	public BaseObject create()
	{
		KmlTourPathEventPtr emptyInstance = new KmlTourPathEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
