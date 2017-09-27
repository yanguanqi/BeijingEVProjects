package com.earthview.world.spatial3d.analysis;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class Analysis3DVisibilityClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Analysis3DVisibility emptyInstance = new Analysis3DVisibility(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
