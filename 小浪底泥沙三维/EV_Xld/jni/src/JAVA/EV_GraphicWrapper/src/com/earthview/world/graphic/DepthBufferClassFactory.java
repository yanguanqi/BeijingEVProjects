package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DepthBufferClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DepthBuffer emptyInstance = new DepthBuffer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
