package com.earthview.world.spatial3d.dataexchange;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MeshParamsClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MeshParams emptyInstance = new MeshParams(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
