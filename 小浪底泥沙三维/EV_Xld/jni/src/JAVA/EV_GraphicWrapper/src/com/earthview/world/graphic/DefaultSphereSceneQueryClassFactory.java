package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DefaultSphereSceneQueryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DefaultSphereSceneQuery emptyInstance = new DefaultSphereSceneQuery(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
