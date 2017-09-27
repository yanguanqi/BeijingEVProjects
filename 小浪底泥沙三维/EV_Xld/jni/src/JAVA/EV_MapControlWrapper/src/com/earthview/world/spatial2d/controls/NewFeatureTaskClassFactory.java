package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class NewFeatureTaskClassFactory implements IClassFactory {
	public BaseObject create()
	{
		NewFeatureTask emptyInstance = new NewFeatureTask(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
