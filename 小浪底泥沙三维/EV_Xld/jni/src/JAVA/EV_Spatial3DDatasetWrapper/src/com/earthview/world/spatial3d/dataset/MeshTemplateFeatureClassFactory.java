package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MeshTemplateFeatureClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MeshTemplateFeature emptyInstance = new MeshTemplateFeature(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
