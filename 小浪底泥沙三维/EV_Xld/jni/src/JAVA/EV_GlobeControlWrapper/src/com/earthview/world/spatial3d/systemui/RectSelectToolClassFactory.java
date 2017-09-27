package com.earthview.world.spatial3d.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RectSelectToolClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RectSelectTool emptyInstance = new RectSelectTool(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
