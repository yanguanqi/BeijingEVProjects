package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.spatial.geodataset.*;
import com.earthview.world.core.*;

public class S57InfoClassFactory implements IClassFactory {
	public BaseObject create()
	{
		S57Info emptyInstance = new S57Info(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
