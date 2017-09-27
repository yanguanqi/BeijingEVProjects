package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SimpleRenderableClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SimpleRenderable emptyInstance = new SimpleRenderable(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
