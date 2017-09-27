package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class FixedElementCameraListenerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		FixedElementCameraListener emptyInstance = new FixedElementCameraListener(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
