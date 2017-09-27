package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class FieldsClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Fields emptyInstance = new Fields(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
