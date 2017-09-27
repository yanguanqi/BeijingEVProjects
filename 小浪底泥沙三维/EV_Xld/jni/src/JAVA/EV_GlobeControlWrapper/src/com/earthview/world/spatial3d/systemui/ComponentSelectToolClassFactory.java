package com.earthview.world.spatial3d.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ComponentSelectToolClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ComponentSelectTool emptyInstance = new ComponentSelectTool(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
