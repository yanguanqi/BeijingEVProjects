package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GlobeControlClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GlobeControl emptyInstance = new GlobeControl(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
