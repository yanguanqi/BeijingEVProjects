package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TempGroupLayerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TempGroupLayer emptyInstance = new TempGroupLayer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
