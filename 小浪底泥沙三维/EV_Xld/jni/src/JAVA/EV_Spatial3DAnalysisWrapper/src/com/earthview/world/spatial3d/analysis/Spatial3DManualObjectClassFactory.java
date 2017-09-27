package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Spatial3DManualObjectClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Spatial3DManualObject emptyInstance = new Spatial3DManualObject(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
