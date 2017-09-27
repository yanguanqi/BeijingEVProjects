package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RoamCameraEventPtrClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RoamCameraEventPtr emptyInstance = new RoamCameraEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
