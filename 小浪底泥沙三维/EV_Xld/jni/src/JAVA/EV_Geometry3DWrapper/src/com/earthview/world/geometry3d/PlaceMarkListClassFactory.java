package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PlaceMarkListClassFactory implements IClassFactory {
	public BaseObject create()
	{
		PlaceMarkList emptyInstance = new PlaceMarkList(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
