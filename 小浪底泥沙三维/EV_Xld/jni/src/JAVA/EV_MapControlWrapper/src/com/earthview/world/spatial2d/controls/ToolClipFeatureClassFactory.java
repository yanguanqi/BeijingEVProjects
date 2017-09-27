package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ToolClipFeatureClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ToolClipFeature emptyInstance = new ToolClipFeature(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
