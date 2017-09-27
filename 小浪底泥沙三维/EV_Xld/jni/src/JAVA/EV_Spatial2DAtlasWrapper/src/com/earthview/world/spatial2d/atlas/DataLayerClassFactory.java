package com.earthview.world.spatial2d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class DataLayerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		DataLayer emptyInstance = new DataLayer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
