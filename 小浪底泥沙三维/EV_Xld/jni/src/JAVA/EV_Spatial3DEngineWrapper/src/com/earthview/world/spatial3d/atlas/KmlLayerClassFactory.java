package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class KmlLayerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		KmlLayer emptyInstance = new KmlLayer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
