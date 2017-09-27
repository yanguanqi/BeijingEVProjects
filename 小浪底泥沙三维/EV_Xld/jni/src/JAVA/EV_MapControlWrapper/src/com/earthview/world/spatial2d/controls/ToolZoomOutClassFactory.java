package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ToolZoomOutClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ToolZoomOut emptyInstance = new ToolZoomOut(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
