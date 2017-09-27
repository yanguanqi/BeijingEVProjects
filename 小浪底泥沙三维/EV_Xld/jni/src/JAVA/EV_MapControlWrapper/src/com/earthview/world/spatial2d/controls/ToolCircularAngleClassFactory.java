package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ToolCircularAngleClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ToolCircularAngle emptyInstance = new ToolCircularAngle(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
