package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class FeatureUnionTaskClassFactory implements IClassFactory {
	public BaseObject create()
	{
		FeatureUnionTask emptyInstance = new FeatureUnionTask(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
