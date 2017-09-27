package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class WfsserverClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Wfsserver emptyInstance = new Wfsserver(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
