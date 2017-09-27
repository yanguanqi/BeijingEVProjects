package com.earthview.industryengine.industrygraphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PolylineFeatureManagerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		PolylineFeatureManager emptyInstance = new PolylineFeatureManager(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
