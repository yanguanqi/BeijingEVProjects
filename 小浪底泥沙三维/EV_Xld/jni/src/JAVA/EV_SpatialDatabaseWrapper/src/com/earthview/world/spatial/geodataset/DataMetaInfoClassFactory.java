package com.earthview.world.spatial.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DataMetaInfoClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DataMetaInfo emptyInstance = new DataMetaInfo(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
