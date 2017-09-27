package com.earthview.world.spatial.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IcacheinfoClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Icacheinfo emptyInstance = new Icacheinfo(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
