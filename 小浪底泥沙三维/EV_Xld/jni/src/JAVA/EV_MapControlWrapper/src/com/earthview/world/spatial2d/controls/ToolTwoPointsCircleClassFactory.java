package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ToolTwoPointsCircleClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ToolTwoPointsCircle emptyInstance = new ToolTwoPointsCircle(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
