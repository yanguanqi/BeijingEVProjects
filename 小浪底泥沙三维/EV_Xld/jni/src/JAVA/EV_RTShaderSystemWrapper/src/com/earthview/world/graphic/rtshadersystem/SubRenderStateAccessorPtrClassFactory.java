package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SubRenderStateAccessorPtrClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SubRenderStateAccessorPtr emptyInstance = new SubRenderStateAccessorPtr(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
