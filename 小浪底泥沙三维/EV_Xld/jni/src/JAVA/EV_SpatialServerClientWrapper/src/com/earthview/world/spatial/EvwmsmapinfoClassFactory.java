package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EvwmsmapinfoClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Evwmsmapinfo emptyInstance = new Evwmsmapinfo(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
