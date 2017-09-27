package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RotationAndZoomCameraEventClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RotationAndZoomCameraEvent emptyInstance = new RotationAndZoomCameraEvent(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
