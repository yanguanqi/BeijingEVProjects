package com.earthview.industryengine.industrygraphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SimplelineManagerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SimplelineManager emptyInstance = new SimplelineManager(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
