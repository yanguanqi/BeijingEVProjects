package com.earthview.world.spatial.systemui;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IitemClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Iitem emptyInstance = new Iitem(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
