package com.earthview.world.spatial.vectorfileparser;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IvectorfilefeatureiteratorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ivectorfilefeatureiterator emptyInstance = new Ivectorfilefeatureiterator(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
