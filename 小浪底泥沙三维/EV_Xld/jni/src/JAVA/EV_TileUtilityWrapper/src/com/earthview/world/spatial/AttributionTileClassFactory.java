package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class AttributionTileClassFactory implements IClassFactory {
	public BaseObject create()
	{
		AttributionTile emptyInstance = new AttributionTile(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
