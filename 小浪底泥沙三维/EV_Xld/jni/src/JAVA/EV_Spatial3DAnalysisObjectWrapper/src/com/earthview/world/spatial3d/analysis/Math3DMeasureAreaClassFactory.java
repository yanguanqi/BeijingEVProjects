package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Math3DMeasureAreaClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Math3DMeasureArea emptyInstance = new Math3DMeasureArea(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
