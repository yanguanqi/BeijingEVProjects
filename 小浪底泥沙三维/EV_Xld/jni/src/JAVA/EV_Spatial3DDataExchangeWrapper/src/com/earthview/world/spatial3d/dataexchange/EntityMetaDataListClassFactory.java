package com.earthview.world.spatial3d.dataexchange;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EntityMetaDataListClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EntityMetaDataList emptyInstance = new EntityMetaDataList(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
