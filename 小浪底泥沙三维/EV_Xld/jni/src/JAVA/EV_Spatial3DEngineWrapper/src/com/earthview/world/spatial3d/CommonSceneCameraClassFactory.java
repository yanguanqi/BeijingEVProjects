package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CommonSceneCameraClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CommonSceneCamera emptyInstance = new CommonSceneCamera(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
