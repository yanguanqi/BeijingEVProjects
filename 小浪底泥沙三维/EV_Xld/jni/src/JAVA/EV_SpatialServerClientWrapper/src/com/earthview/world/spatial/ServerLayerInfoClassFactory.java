package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ServerLayerInfoClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ServerLayerInfo emptyInstance = new ServerLayerInfo(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
