package com.earthview.industryengine.dynamicmodellibrary;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CameraAnimationParamClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CameraAnimationParam emptyInstance = new CameraAnimationParam(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
