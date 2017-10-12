package com.earthview.world.spatial3d.atlas;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EvlasxglayerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Evlasxglayer emptyInstance = new Evlasxglayer(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
