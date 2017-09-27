package com.earthview.world.spatial2d.analyst;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class NetworkAnalystLayerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		NetworkAnalystLayer emptyInstance = new NetworkAnalystLayer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
