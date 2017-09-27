package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ServerPointListClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ServerPointList emptyInstance = new ServerPointList(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
