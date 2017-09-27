package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SphereSceneQueryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SphereSceneQuery emptyInstance = new SphereSceneQuery(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
