package com.earthview.world.spatial3d.dataexchange;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MeshDataCreatorClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MeshDataCreator emptyInstance = new MeshDataCreator(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
