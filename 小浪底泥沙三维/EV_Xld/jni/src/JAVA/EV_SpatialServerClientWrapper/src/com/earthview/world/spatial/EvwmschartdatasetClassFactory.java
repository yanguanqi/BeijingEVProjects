package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.spatial.geodataset.*;
import com.earthview.world.spatial.download.*;
import com.earthview.world.core.*;

public class EvwmschartdatasetClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Evwmschartdataset emptyInstance = new Evwmschartdataset(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
