package com.earthview.world.spatial.effect3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RealCloudLayerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RealCloudLayer emptyInstance = new RealCloudLayer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
