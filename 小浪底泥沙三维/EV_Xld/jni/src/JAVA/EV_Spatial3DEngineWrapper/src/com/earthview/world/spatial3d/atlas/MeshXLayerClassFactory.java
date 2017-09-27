package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MeshXLayerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MeshXLayer emptyInstance = new MeshXLayer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
