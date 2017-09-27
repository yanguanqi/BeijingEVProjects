package com.earthview.world.spatial.display;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class GeometryRendererClassFactory implements IClassFactory {
	public BaseObject create()
	{
		GeometryRenderer emptyInstance = new GeometryRenderer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
