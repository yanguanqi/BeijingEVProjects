package com.earthview.world.spatial2d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class BaseGroupLayerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		BaseGroupLayer emptyInstance = new BaseGroupLayer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
