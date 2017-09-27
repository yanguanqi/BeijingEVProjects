package com.earthview.world.spatial2d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class NetworkLayerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		NetworkLayer emptyInstance = new NetworkLayer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
