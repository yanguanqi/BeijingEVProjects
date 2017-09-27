package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ToolSplitObjectClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ToolSplitObject emptyInstance = new ToolSplitObject(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
