package com.earthview.world.spatial2d.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DatabaseVectorSourceFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DatabaseVectorSourceFactory emptyInstance = new DatabaseVectorSourceFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
