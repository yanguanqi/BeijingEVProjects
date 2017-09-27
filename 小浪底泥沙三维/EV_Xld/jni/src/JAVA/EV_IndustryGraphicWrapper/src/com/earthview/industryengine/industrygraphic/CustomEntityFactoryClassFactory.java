package com.earthview.industryengine.industrygraphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CustomEntityFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CustomEntityFactory emptyInstance = new CustomEntityFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
