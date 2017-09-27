package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RenderableClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Renderable emptyInstance = new Renderable(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
