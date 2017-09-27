package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SubRenderStateClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SubRenderState emptyInstance = new SubRenderState(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
