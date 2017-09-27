package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GlobeGridClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GlobeGrid emptyInstance = new GlobeGrid(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
