package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SetCameraLockTargetEventPtrClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SetCameraLockTargetEventPtr emptyInstance = new SetCameraLockTargetEventPtr(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
