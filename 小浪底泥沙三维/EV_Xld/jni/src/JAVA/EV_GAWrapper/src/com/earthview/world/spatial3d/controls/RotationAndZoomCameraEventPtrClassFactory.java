package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RotationAndZoomCameraEventPtrClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RotationAndZoomCameraEventPtr emptyInstance = new RotationAndZoomCameraEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
