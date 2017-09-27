package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SubRenderStateFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SubRenderStateFactory emptyInstance = new SubRenderStateFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
