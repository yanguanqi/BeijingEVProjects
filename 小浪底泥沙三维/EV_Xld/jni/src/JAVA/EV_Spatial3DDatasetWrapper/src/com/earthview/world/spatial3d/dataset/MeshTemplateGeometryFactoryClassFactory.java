package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MeshTemplateGeometryFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MeshTemplateGeometryFactory emptyInstance = new MeshTemplateGeometryFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
