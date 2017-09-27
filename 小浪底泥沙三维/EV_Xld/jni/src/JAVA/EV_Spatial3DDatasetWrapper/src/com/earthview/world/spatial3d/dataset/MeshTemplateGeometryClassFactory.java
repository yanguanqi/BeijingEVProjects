package com.earthview.world.spatial3d.dataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MeshTemplateGeometryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MeshTemplateGeometry emptyInstance = new MeshTemplateGeometry(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
