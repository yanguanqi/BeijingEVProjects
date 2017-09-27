package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.spatial.geodataset.*;
import com.earthview.world.spatial.download.*;
import com.earthview.world.core.*;

public class EvbasemodeldatasetClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Evbasemodeldataset emptyInstance = new Evbasemodeldataset(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
