package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ToolPointSelectClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ToolPointSelect emptyInstance = new ToolPointSelect(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
