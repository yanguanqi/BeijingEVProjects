package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class OctreeSphereSceneQueryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		OctreeSphereSceneQuery emptyInstance = new OctreeSphereSceneQuery(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
