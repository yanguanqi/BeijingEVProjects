package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class SubMeshDataClassFactory implements IClassFactory {
	public BaseObject create()
	{
		SubMeshData emptyInstance = new SubMeshData(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
