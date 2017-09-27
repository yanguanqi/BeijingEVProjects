package com.earthview.world.spatial3d.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RegionAreaListenerClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RegionAreaListener emptyInstance = new RegionAreaListener(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
