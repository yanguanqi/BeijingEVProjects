package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class OgcwfsserverconnectionClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ogcwfsserverconnection emptyInstance = new Ogcwfsserverconnection(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
