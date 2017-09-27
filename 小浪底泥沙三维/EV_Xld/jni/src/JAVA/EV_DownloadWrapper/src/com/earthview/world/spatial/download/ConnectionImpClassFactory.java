package com.earthview.world.spatial.download;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ConnectionImpClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ConnectionImp emptyInstance = new ConnectionImp(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
