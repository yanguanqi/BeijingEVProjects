package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TiltCameraEventPtrClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TiltCameraEventPtr emptyInstance = new TiltCameraEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
