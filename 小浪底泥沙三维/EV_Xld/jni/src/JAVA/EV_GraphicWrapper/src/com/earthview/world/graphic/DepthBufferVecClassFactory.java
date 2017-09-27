package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DepthBufferVecClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DepthBufferVec emptyInstance = new DepthBufferVec(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
