package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModifyFeatureTaskClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ModifyFeatureTask emptyInstance = new ModifyFeatureTask(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
