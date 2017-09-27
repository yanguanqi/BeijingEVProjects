package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class LayerTilePairClassFactory implements IClassFactory {
	public BaseObject create()
	{
		LayerTilePair emptyInstance = new LayerTilePair(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
