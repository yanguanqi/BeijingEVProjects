package com.earthview.world.spatial3d.dataexchange;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EntityMetaDataClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EntityMetaData emptyInstance = new EntityMetaData(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
