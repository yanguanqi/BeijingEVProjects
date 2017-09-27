package com.earthview.industryengine.industrygraphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RaySelectedListenerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RaySelectedListener emptyInstance = new RaySelectedListener(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
