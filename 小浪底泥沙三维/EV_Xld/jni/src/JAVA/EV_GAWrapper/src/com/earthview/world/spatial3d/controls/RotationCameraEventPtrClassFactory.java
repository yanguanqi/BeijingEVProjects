package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RotationCameraEventPtrClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RotationCameraEventPtr emptyInstance = new RotationCameraEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
