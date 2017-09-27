package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CollisionDetectionCameraManipulatorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CollisionDetectionCameraManipulator emptyInstance = new CollisionDetectionCameraManipulator(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
