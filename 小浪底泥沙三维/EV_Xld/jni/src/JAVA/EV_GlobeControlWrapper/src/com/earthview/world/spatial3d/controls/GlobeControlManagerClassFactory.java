package com.earthview.world.spatial3d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GlobeControlManagerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GlobeControlManager emptyInstance = new GlobeControlManager(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
