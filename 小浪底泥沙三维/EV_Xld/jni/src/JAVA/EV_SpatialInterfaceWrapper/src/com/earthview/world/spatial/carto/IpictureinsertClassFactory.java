package com.earthview.world.spatial.carto;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IpictureinsertClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ipictureinsert emptyInstance = new Ipictureinsert(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
