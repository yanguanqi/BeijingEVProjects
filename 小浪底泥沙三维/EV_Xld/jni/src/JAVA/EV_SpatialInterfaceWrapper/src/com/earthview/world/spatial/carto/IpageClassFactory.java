package com.earthview.world.spatial.carto;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IpageClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ipage emptyInstance = new Ipage(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
