package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CommonSceneControlClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CommonSceneControl emptyInstance = new CommonSceneControl(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
