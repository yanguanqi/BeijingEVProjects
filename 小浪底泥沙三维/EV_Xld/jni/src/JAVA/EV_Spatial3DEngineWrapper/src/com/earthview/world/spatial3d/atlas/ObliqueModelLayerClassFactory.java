package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ObliqueModelLayerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		ObliqueModelLayer emptyInstance = new ObliqueModelLayer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
