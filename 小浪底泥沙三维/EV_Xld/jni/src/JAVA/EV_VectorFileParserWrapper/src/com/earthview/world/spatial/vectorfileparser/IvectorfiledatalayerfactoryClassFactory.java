package com.earthview.world.spatial.vectorfileparser;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IvectorfiledatalayerfactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ivectorfiledatalayerfactory emptyInstance = new Ivectorfiledatalayerfactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
