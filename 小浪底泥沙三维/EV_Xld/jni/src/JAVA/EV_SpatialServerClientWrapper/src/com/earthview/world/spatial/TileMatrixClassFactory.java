package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TileMatrixClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TileMatrix emptyInstance = new TileMatrix(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
