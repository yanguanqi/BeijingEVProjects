package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RenderSystemClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RenderSystem emptyInstance = new RenderSystem(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
