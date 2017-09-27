package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GlobeCommandClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GlobeCommand emptyInstance = new GlobeCommand(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
