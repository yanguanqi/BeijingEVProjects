package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RenderTargetMapClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RenderTargetMap emptyInstance = new RenderTargetMap(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
