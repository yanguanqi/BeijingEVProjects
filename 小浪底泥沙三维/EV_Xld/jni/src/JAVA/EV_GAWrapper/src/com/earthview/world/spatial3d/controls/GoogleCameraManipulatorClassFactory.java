package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GoogleCameraManipulatorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GoogleCameraManipulator emptyInstance = new GoogleCameraManipulator(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
