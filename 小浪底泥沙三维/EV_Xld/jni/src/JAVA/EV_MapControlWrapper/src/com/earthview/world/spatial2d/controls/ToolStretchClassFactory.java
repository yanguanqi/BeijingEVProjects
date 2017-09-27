package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ToolStretchClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ToolStretch emptyInstance = new ToolStretch(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
