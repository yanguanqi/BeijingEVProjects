package com.earthview.world.spatial2d.controls;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class MapSnapperClassFactory implements IClassFactory {
	public BaseObject create()
	{
		MapSnapper emptyInstance = new MapSnapper(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
