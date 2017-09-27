package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class KmlRenderableManagerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		KmlRenderableManager emptyInstance = new KmlRenderableManager(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
