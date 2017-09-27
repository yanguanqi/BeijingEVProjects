package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GlobeLockCameraHandlerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GlobeLockCameraHandler emptyInstance = new GlobeLockCameraHandler(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
