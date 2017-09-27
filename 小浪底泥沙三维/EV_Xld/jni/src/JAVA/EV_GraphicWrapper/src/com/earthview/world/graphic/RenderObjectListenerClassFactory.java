package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RenderObjectListenerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RenderObjectListener emptyInstance = new RenderObjectListener(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
