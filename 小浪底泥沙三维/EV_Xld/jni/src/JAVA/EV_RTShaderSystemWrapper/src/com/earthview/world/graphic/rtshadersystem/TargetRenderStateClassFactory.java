package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TargetRenderStateClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TargetRenderState emptyInstance = new TargetRenderState(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
