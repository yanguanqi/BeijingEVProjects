package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TileReferenceClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TileReference emptyInstance = new TileReference(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
