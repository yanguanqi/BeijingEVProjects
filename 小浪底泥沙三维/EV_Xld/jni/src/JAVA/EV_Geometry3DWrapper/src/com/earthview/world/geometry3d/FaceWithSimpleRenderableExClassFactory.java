package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class FaceWithSimpleRenderableExClassFactory implements IClassFactory {
	public BaseObject create()
	{
		FaceWithSimpleRenderableEx emptyInstance = new FaceWithSimpleRenderableEx(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
