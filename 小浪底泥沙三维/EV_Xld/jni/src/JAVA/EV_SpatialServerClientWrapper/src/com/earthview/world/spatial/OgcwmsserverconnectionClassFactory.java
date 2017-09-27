package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class OgcwmsserverconnectionClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ogcwmsserverconnection emptyInstance = new Ogcwmsserverconnection(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
