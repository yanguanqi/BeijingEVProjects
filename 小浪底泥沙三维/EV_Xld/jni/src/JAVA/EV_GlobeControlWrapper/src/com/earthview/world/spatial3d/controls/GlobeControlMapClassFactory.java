package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GlobeControlMapClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GlobeControlMap emptyInstance = new GlobeControlMap(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
