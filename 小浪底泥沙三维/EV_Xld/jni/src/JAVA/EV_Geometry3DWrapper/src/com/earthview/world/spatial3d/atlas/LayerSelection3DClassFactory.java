package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LayerSelection3DClassFactory implements IClassFactory {
	public BaseObject create()
	{
		LayerSelection3D emptyInstance = new LayerSelection3D(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
