package com.earthview.world.core;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;

public class DeviceUtilityClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DeviceUtility emptyInstance = new DeviceUtility(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
