package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.spatial.geodataset.*;
import com.earthview.world.spatial.download.*;
import com.earthview.world.core.*;

public class EvmodeltemplatedatasetClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Evmodeltemplatedataset emptyInstance = new Evmodeltemplatedataset(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
