package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ToolCopyFeatureClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ToolCopyFeature emptyInstance = new ToolCopyFeature(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
