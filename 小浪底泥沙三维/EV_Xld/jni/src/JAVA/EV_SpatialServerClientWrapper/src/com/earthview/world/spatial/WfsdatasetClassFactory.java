package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class WfsdatasetClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Wfsdataset emptyInstance = new Wfsdataset(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
