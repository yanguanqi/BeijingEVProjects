package com.earthview.world.spatial.effect3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class CloudLayerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		CloudLayer emptyInstance = new CloudLayer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
