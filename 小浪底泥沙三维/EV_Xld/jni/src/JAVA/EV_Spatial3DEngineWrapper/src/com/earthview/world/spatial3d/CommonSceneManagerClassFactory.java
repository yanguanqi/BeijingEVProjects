package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CommonSceneManagerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CommonSceneManager emptyInstance = new CommonSceneManager(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
