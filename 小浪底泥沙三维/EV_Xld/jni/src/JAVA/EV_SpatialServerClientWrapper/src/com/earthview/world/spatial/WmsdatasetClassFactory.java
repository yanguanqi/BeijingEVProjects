package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class WmsdatasetClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Wmsdataset emptyInstance = new Wmsdataset(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
