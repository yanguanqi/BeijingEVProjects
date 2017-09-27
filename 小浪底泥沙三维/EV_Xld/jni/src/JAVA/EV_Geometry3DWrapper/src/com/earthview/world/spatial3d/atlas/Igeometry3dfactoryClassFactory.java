package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Igeometry3dfactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Igeometry3dfactory emptyInstance = new Igeometry3dfactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
