package com.earthview.world.spatial3d.modelmanager;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class ObqmetainfoClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Obqmetainfo emptyInstance = new Obqmetainfo(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
