package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class FloodPointVectorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		FloodPointVector emptyInstance = new FloodPointVector(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
