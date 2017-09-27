package com.earthview.world.spatial2d.analyst;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RasterTileMosaicClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RasterTileMosaic emptyInstance = new RasterTileMosaic(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
