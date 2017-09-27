package com.earthview.world.spatial3d.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelRaySelectToolClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ModelRaySelectTool emptyInstance = new ModelRaySelectTool(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
