package com.earthview.world.spatial3dproxy;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GlobeViewEventObjectClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GlobeViewEventObject emptyInstance = new GlobeViewEventObject(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
