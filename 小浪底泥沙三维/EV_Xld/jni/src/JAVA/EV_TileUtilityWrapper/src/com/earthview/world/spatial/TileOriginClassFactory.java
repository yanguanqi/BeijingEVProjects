package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TileOriginClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TileOrigin emptyInstance = new TileOrigin(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
