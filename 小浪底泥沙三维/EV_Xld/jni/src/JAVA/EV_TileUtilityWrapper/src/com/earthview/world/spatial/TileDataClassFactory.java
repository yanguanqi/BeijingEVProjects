package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TileDataClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TileData emptyInstance = new TileData(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
