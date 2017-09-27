package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class BorderRenderableClassFactory implements IClassFactory {
	public BaseObject create()
	{
		BorderRenderable emptyInstance = new BorderRenderable(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
