package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SimpleRenderableExClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SimpleRenderableEx emptyInstance = new SimpleRenderableEx(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
