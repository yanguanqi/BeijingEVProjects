package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SetCameraRotationratioEventClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SetCameraRotationratioEvent emptyInstance = new SetCameraRotationratioEvent(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
