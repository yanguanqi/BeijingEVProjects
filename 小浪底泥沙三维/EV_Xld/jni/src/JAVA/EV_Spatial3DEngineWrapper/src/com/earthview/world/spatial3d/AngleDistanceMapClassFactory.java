package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class AngleDistanceMapClassFactory implements IClassFactory {
	public BaseObject create()
	{
		AngleDistanceMap emptyInstance = new AngleDistanceMap(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
