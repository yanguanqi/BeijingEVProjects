package com.earthview.industryengine.dynamicmodellibrary;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CameraAnimationParamSetClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CameraAnimationParamSet emptyInstance = new CameraAnimationParamSet(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
