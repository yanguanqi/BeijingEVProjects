package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class WebLayerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		WebLayer emptyInstance = new WebLayer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
