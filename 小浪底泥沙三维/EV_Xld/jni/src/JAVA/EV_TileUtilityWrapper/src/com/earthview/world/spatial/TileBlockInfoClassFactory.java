package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TileBlockInfoClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TileBlockInfo emptyInstance = new TileBlockInfo(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
