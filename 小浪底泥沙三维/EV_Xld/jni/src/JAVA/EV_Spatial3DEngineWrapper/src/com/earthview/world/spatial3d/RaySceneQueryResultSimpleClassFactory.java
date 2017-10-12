package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.graphic.*;
import com.earthview.world.core.*;
import com.earthview.world.spatial.atlas.*;

public class RaySceneQueryResultSimpleClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RaySceneQueryResultSimple emptyInstance = new RaySceneQueryResultSimple(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
