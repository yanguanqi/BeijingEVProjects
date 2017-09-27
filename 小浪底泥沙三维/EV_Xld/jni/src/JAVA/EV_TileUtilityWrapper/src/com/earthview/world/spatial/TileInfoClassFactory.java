package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TileInfoClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TileInfo emptyInstance = new TileInfo(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
