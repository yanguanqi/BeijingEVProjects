package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EvwfsmapinfoClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Evwfsmapinfo emptyInstance = new Evwfsmapinfo(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
