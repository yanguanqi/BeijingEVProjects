package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TileMatrixSetClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TileMatrixSet emptyInstance = new TileMatrixSet(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
