package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class OctreeCameraClassFactory implements IClassFactory {
	public BaseObject create()
	{
		OctreeCamera emptyInstance = new OctreeCamera(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
