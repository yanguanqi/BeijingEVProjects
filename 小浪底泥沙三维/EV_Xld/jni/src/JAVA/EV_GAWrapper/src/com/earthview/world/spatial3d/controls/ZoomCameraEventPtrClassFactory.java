package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ZoomCameraEventPtrClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ZoomCameraEventPtr emptyInstance = new ZoomCameraEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
