package com.earthview.world.spatial3d.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ModelRaySelectorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ModelRaySelector emptyInstance = new ModelRaySelector(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
