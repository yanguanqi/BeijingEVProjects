package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Math3DVisibilityClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Math3DVisibility emptyInstance = new Math3DVisibility(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
