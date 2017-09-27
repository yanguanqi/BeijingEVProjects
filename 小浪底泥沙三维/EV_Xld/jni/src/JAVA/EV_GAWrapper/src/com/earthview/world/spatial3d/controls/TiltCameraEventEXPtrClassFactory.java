package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TiltCameraEventEXPtrClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TiltCameraEventEXPtr emptyInstance = new TiltCameraEventEXPtr(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
