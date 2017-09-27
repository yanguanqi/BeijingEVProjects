package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Analysis3DMeasureAreaClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Analysis3DMeasureArea emptyInstance = new Analysis3DMeasureArea(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
