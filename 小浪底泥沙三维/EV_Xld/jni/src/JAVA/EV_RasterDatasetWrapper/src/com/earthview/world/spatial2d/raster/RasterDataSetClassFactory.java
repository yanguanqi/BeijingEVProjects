package com.earthview.world.spatial2d.raster;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RasterDataSetClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RasterDataSet emptyInstance = new RasterDataSet(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
