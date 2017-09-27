package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CommonSceneManagerFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CommonSceneManagerFactory emptyInstance = new CommonSceneManagerFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
