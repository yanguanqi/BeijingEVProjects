package com.earthview.world.spatial3d.dataexchange;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class EarthViewModelDriverClassFactory implements IClassFactory {
	public BaseObject create()
	{
		EarthViewModelDriver emptyInstance = new EarthViewModelDriver(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
