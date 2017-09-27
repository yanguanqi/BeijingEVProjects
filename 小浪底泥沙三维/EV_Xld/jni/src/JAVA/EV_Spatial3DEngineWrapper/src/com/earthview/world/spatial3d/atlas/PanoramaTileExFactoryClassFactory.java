package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PanoramaTileExFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		PanoramaTileExFactory emptyInstance = new PanoramaTileExFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
