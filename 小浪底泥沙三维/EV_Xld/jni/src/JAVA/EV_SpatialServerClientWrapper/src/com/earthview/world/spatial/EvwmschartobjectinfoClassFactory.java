package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EvwmschartobjectinfoClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Evwmschartobjectinfo emptyInstance = new Evwmschartobjectinfo(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
