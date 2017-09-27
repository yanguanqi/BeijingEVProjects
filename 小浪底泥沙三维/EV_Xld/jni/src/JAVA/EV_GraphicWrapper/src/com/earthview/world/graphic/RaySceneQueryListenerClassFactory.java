package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RaySceneQueryListenerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RaySceneQueryListener emptyInstance = new RaySceneQueryListener(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
