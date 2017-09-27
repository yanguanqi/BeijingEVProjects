package com.earthview.world.spatial2d.raster;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RasterDataSourceClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RasterDataSource emptyInstance = new RasterDataSource(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
