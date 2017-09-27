package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LightPointClassFactory implements IClassFactory {
	public BaseObject create()
	{
		LightPoint emptyInstance = new LightPoint(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
