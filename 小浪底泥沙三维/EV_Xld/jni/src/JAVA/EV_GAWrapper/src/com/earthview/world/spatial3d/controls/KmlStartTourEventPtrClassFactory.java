package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class KmlStartTourEventPtrClassFactory implements IClassFactory {
	public BaseObject create()
	{
		KmlStartTourEventPtr emptyInstance = new KmlStartTourEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
