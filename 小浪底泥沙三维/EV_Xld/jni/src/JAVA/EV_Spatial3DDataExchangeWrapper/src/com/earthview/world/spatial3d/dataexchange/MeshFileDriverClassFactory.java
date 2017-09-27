package com.earthview.world.spatial3d.dataexchange;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MeshFileDriverClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MeshFileDriver emptyInstance = new MeshFileDriver(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
