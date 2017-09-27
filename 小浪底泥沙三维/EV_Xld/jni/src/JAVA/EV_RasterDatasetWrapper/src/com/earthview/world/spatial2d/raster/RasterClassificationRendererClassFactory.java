package com.earthview.world.spatial2d.raster;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RasterClassificationRendererClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RasterClassificationRenderer emptyInstance = new RasterClassificationRenderer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
