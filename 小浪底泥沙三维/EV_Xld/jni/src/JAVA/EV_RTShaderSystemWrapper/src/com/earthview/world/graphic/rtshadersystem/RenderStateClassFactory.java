package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RenderStateClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RenderState emptyInstance = new RenderState(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
