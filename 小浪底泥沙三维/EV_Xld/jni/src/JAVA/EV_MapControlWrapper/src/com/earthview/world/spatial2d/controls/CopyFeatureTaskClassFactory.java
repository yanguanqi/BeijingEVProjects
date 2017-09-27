package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CopyFeatureTaskClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CopyFeatureTask emptyInstance = new CopyFeatureTask(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
