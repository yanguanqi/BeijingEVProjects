package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Analysis3DMeasureAreaParamClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Analysis3DMeasureAreaParam emptyInstance = new Analysis3DMeasureAreaParam(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
