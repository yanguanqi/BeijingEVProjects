package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class VectorTileClassFactory implements IClassFactory {
	public BaseObject create()
	{
		VectorTile emptyInstance = new VectorTile(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
