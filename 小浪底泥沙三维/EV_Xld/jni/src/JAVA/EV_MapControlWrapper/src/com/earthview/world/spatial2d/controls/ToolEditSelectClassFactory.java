package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ToolEditSelectClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ToolEditSelect emptyInstance = new ToolEditSelect(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
