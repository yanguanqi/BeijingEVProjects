package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RenderTargetClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RenderTarget emptyInstance = new RenderTarget(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
