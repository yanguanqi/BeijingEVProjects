package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SubRenderStateAccessorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SubRenderStateAccessor emptyInstance = new SubRenderStateAccessor(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
