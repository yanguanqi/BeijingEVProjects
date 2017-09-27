package com.earthview.world.spatial2d.raster;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IrasterrendererClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Irasterrenderer emptyInstance = new Irasterrenderer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
