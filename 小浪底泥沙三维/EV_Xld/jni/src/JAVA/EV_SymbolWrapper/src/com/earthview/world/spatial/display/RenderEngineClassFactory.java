package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RenderEngineClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RenderEngine emptyInstance = new RenderEngine(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
