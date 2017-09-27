package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class FrustumClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Frustum emptyInstance = new Frustum(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
