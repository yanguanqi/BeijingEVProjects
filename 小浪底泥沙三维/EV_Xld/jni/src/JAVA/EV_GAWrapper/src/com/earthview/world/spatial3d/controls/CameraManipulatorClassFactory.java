package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CameraManipulatorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CameraManipulator emptyInstance = new CameraManipulator(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
