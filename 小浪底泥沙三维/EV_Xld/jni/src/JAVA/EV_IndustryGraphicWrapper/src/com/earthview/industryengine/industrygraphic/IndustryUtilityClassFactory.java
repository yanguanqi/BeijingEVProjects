package com.earthview.industryengine.industrygraphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IndustryUtilityClassFactory implements IClassFactory {
	public BaseObject create()
	{
		IndustryUtility emptyInstance = new IndustryUtility(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
