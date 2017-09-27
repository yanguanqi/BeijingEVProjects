package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class OctreeSceneManagerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		OctreeSceneManager emptyInstance = new OctreeSceneManager(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
