package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RenderSystemListClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RenderSystemList emptyInstance = new RenderSystemList(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
