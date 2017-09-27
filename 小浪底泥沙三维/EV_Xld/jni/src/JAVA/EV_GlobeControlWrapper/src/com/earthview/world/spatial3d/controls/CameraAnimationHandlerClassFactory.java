package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CameraAnimationHandlerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CameraAnimationHandler emptyInstance = new CameraAnimationHandler(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
