package com.earthview.world.spatial3d.dataexchange;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MeshResourceMapClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MeshResourceMap emptyInstance = new MeshResourceMap(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
