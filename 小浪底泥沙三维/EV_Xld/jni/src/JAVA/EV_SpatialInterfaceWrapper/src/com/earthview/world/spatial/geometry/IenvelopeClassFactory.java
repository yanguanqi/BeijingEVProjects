package com.earthview.world.spatial.geometry;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class IenvelopeClassFactory implements IClassFactory {
	public BaseObject create()
	{
		Ienvelope emptyInstance = new Ienvelope(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
