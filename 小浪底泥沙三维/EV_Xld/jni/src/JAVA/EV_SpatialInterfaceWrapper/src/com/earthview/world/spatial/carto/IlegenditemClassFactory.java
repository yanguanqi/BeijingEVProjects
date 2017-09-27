package com.earthview.world.spatial.carto;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IlegenditemClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ilegenditem emptyInstance = new Ilegenditem(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
