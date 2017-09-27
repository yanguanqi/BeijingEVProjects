package com.earthview.world.spatial2d.spatialindex;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IstoragemanagerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Istoragemanager emptyInstance = new Istoragemanager(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
