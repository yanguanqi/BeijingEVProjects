package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GlobeAnimationHandlerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GlobeAnimationHandler emptyInstance = new GlobeAnimationHandler(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
