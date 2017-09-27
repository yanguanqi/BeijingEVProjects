package com.earthview.world.spatial3d.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RaySelectToolClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RaySelectTool emptyInstance = new RaySelectTool(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
