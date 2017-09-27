package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class I3DLayerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		I3DLayer emptyInstance = new I3DLayer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
