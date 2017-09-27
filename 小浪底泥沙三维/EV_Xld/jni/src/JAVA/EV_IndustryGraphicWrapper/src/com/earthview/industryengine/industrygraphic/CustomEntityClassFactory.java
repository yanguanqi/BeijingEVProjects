package com.earthview.industryengine.industrygraphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CustomEntityClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CustomEntity emptyInstance = new CustomEntity(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
