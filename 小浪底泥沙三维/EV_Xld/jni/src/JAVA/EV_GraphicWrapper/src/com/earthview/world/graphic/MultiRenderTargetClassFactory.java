package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MultiRenderTargetClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MultiRenderTarget emptyInstance = new MultiRenderTarget(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
