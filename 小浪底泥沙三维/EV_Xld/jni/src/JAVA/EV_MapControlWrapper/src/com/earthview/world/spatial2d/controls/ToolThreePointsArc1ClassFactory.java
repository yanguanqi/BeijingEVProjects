package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ToolThreePointsArc1ClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ToolThreePointsArc1 emptyInstance = new ToolThreePointsArc1(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
