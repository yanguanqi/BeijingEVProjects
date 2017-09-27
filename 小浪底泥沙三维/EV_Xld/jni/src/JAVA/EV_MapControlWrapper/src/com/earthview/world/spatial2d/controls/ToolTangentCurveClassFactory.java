package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ToolTangentCurveClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ToolTangentCurve emptyInstance = new ToolTangentCurve(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
