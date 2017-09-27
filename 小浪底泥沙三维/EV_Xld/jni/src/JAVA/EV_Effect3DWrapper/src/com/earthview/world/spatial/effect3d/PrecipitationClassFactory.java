package com.earthview.world.spatial.effect3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class PrecipitationClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Precipitation emptyInstance = new Precipitation(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
