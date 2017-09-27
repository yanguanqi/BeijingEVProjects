package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Analysis3DVisibilityParamClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Analysis3DVisibilityParam emptyInstance = new Analysis3DVisibilityParam(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
