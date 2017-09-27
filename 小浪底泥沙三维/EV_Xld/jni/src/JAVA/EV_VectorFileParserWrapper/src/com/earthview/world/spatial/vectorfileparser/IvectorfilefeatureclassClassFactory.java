package com.earthview.world.spatial.vectorfileparser;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IvectorfilefeatureclassClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ivectorfilefeatureclass emptyInstance = new Ivectorfilefeatureclass(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
