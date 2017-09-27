package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LightPointSystemClassFactory implements IClassFactory {
	public BaseObject create()
	{
		LightPointSystem emptyInstance = new LightPointSystem(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
