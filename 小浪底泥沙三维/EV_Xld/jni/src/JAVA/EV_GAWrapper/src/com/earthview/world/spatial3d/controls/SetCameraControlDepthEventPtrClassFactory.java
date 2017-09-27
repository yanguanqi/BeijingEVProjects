package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SetCameraControlDepthEventPtrClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SetCameraControlDepthEventPtr emptyInstance = new SetCameraControlDepthEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
