package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ToolDefaultClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ToolDefault emptyInstance = new ToolDefault(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
