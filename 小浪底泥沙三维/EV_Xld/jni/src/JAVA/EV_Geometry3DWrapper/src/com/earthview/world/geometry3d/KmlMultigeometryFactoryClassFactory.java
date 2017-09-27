package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class KmlMultigeometryFactoryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		KmlMultigeometryFactory emptyInstance = new KmlMultigeometryFactory(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
