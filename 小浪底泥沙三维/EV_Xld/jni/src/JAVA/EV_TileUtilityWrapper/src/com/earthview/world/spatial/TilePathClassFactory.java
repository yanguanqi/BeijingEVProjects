package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TilePathClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TilePath emptyInstance = new TilePath(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
