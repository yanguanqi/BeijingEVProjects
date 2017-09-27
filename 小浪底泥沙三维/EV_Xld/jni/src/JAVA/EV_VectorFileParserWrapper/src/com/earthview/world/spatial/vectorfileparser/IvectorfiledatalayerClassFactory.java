package com.earthview.world.spatial.vectorfileparser;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IvectorfiledatalayerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ivectorfiledatalayer emptyInstance = new Ivectorfiledatalayer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
