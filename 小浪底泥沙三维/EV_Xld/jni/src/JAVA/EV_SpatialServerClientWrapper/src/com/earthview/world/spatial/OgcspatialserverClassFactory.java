package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class OgcspatialserverClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ogcspatialserver emptyInstance = new Ogcspatialserver(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
