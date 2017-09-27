package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TilePixelSizeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TilePixelSize emptyInstance = new TilePixelSize(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
