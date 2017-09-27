package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SceneFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SceneFactory emptyInstance = new SceneFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
