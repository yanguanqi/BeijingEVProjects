package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ShadowRenderableClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ShadowRenderable emptyInstance = new ShadowRenderable(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
