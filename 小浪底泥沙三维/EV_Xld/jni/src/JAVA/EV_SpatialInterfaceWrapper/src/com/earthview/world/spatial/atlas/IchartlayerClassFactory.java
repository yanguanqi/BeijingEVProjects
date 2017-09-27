package com.earthview.world.spatial.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IchartlayerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ichartlayer emptyInstance = new Ichartlayer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
