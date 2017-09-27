package com.earthview.world.spatial2d.raster;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RasterDataSourceFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RasterDataSourceFactory emptyInstance = new RasterDataSourceFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
