package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ToolRoundRectangleClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ToolRoundRectangle emptyInstance = new ToolRoundRectangle(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
