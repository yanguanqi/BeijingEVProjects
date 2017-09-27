package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class KmlArrow3DMovableClassFactory implements IClassFactory {
	public BaseObject create()
	{
		KmlArrow3DMovable emptyInstance = new KmlArrow3DMovable(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
