package com.earthview.industryengine.industrygraphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PolylineFeatureClassFactory implements IClassFactory {
	public BaseObject create()
	{
		PolylineFeature emptyInstance = new PolylineFeature(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
