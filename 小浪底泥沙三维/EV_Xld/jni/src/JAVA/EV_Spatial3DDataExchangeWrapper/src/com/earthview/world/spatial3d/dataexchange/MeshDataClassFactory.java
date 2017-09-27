package com.earthview.world.spatial3d.dataexchange;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MeshDataClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MeshData emptyInstance = new MeshData(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
