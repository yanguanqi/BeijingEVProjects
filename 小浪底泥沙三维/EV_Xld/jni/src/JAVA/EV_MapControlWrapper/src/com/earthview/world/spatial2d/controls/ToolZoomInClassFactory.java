package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ToolZoomInClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ToolZoomIn emptyInstance = new ToolZoomIn(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
