package com.earthview.world.spatial3d.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class RegionAreaManualObjectClassFactory implements IClassFactory {
	public BaseObject create()
	{
		RegionAreaManualObject emptyInstance = new RegionAreaManualObject(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
