package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.spatial.geodataset.*;
import com.earthview.world.spatial.download.*;
import com.earthview.world.core.*;

public class EvkmldatasetClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Evkmldataset emptyInstance = new Evkmldataset(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
