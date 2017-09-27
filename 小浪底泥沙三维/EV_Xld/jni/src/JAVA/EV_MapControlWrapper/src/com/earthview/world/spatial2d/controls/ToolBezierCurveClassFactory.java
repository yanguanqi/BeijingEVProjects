package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ToolBezierCurveClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ToolBezierCurve emptyInstance = new ToolBezierCurve(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
