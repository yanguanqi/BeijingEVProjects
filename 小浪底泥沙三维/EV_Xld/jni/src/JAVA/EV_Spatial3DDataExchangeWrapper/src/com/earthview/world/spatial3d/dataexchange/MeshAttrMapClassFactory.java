package com.earthview.world.spatial3d.dataexchange;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MeshAttrMapClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MeshAttrMap emptyInstance = new MeshAttrMap(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
