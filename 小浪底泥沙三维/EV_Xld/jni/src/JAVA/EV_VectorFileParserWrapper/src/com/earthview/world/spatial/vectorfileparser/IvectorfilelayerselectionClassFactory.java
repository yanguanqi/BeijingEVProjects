package com.earthview.world.spatial.vectorfileparser;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IvectorfilelayerselectionClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ivectorfilelayerselection emptyInstance = new Ivectorfilelayerselection(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
