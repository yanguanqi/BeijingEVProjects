package com.earthview.world.graphic;

import global.*;
import com.earthview.world.base.*;
import com.earthview.world.util.*;
import com.earthview.world.core.*;

public class WireBoundingBoxClassFactory implements IClassFactory {
	public BaseObject create()
	{
		WireBoundingBox emptyInstance = new WireBoundingBox(CreatedWhenConstruct.CWC_NotToCreate);
		return emptyInstance;
	}
}
