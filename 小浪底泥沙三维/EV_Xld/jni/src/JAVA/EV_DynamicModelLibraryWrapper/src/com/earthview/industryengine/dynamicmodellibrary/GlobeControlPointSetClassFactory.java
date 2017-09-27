package com.earthview.industryengine.dynamicmodellibrary;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GlobeControlPointSetClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GlobeControlPointSet emptyInstance = new GlobeControlPointSet(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
