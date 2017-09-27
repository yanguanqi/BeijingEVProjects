package com.earthview.world.frameworkproxy.atlasmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EvdatasettypesetClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Evdatasettypeset emptyInstance = new Evdatasettypeset(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
