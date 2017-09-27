package com.earthview.world.spatial3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MeshDataInfoClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MeshDataInfo emptyInstance = new MeshDataInfo(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
