package com.earthview.world.spatial3d.dataexchange;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MeshResourceItemClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MeshResourceItem emptyInstance = new MeshResourceItem(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
