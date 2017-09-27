package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RenderStateListClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RenderStateList emptyInstance = new RenderStateList(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
