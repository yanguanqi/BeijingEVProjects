package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ToolFreeZoomClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ToolFreeZoom emptyInstance = new ToolFreeZoom(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
