package com.earthview.world.spatial2d.geodataset;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DatabaseVectorSourceClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DatabaseVectorSource emptyInstance = new DatabaseVectorSource(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
