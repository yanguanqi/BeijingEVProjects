package com.earthview.world.spatial2d.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class WfscachedataClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Wfscachedata emptyInstance = new Wfscachedata(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
