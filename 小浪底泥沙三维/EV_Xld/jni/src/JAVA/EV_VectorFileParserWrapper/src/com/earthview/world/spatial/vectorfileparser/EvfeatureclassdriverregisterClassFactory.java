package com.earthview.world.spatial.vectorfileparser;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EvfeatureclassdriverregisterClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Evfeatureclassdriverregister emptyInstance = new Evfeatureclassdriverregister(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
