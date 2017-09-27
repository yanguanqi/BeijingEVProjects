package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ServerResourceObjectClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ServerResourceObject emptyInstance = new ServerResourceObject(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
