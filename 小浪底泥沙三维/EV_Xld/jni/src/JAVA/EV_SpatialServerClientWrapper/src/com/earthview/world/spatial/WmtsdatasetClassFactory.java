package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class WmtsdatasetClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Wmtsdataset emptyInstance = new Wmtsdataset(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
