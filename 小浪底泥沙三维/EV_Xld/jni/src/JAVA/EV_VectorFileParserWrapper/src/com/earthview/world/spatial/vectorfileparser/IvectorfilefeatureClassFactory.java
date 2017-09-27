package com.earthview.world.spatial.vectorfileparser;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IvectorfilefeatureClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ivectorfilefeature emptyInstance = new Ivectorfilefeature(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
