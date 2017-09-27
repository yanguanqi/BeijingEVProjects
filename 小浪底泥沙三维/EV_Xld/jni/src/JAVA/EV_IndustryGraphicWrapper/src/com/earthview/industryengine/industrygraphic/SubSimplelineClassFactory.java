package com.earthview.industryengine.industrygraphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SubSimplelineClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SubSimpleline emptyInstance = new SubSimpleline(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
