package com.earthview.world.spatial2d.renderer;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class FeatureRendererClassFactory implements IClassFactory {
	public BaseObject create()
	{
		FeatureRenderer emptyInstance = new FeatureRenderer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
