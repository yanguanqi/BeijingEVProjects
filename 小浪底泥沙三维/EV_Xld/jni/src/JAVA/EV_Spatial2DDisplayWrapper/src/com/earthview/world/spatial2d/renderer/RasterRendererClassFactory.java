package com.earthview.world.spatial2d.renderer;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RasterRendererClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RasterRenderer emptyInstance = new RasterRenderer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
