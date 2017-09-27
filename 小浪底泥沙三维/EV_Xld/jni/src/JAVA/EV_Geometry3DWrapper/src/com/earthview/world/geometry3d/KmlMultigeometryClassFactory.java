package com.earthview.world.geometry3d;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class KmlMultigeometryClassFactory implements IClassFactory {
	public BaseObject create()
	{
		KmlMultigeometry emptyInstance = new KmlMultigeometry(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
