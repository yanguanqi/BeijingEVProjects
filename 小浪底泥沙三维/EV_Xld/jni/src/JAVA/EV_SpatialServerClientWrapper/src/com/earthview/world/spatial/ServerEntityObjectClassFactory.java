package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ServerEntityObjectClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ServerEntityObject emptyInstance = new ServerEntityObject(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
