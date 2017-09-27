package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.spatial.geometry.*;
import com.earthview.world.core.*;

public class ToolConcentricCircleClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ToolConcentricCircle emptyInstance = new ToolConcentricCircle(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
