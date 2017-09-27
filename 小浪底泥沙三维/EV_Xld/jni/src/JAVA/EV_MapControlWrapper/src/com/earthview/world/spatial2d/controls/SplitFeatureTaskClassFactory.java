package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SplitFeatureTaskClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SplitFeatureTask emptyInstance = new SplitFeatureTask(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
