package com.earthview.world.spatial;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class TileReferenceFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		TileReferenceFactory emptyInstance = new TileReferenceFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
