package com.earthview.world.graphic.rtshadersystem;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SubRenderStateListClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SubRenderStateList emptyInstance = new SubRenderStateList(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
