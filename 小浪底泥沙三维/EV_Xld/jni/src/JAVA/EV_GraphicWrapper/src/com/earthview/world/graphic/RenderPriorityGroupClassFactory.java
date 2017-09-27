package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RenderPriorityGroupClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RenderPriorityGroup emptyInstance = new RenderPriorityGroup(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
