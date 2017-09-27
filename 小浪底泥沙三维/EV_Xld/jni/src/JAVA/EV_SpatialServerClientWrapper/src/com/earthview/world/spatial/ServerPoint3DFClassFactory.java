package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ServerPoint3DFClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ServerPoint3DF emptyInstance = new ServerPoint3DF(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
